#include <stdio.h>
#include <sys/statvfs.h>
#include "bbash.h"
#include <string.h>

void list_arg(int argc, char **argv){
    int status_search_arg = 0;
    struct arguments list_arguments_list[] = { 
                                        {"-fl",cmd_list_fl},
                                        {"-dir",cmd_list_dir},
                                        {"-ph",cmd_list_ph},
                                        {NULL,NULL},
                                        };
    for(int i = 0; list_arguments_list[i].name != NULL; i++){
        if(strcmp(argv[1], list_arguments_list[i].name) == 0){
            status_search_arg = 1;
            ((void (*)())list_arguments_list[i].func)();
            break;
        }
    }
    if(status_search_arg == 0){
        printf("Для получения справочника о команде 'list', введите help\n");
    }
}
