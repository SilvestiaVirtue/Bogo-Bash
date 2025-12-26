#include <stdio.h>
#include "bbash.h"
#include <string.h>

void crdir_arg(int argc, char **argv){
    int status_search_arg = 0;
    struct arguments list_arguments_crdir[] = { 
                                        {"-def",cmd_crdir_def},
                                        {"-oo",cmd_crdir_oo},
                                        {"-fa",cmd_crdir_fa},
                                        {NULL,NULL},
                                        };
    for(int i = 0; list_arguments_crdir[i].name != NULL; i++){
        if(strcmp(argv[1], list_arguments_crdir[i].name) == 0){
            status_search_arg = 1;
            ((void (*)(int, char**))list_arguments_crdir[i].func)(argc, argv);
            break;
        }
    }
    if(status_search_arg == 0){
        printf("Для получения справочника о команде 'crdir', введите help\n");
    }
}
