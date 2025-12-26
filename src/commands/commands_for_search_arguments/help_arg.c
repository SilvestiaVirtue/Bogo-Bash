#include <stdio.h>
#include "bbash.h"
#include <string.h>

void help_arg(int argc, char **argv){
    int status_search_arg = 0;
    struct arguments list_arguments_help[] = { 
                                        {"-ru",cmd_help_ru},
                                        {"-eng",cmd_help_eng},
                                        {"-wtcr",cmd_help_wtcr},
                                        {NULL,NULL},
                                        };
    for(int i = 0; list_arguments_help[i].name != NULL; i++){
        if(strcmp(argv[1], list_arguments_help[i].name) == 0){
            status_search_arg = 1;
            ((void (*)())list_arguments_help[i].func)();
            break;
        }
    }
    if(status_search_arg == 0){
        printf("Для получения справочника о команде 'help', введите help\n");
    }
}
