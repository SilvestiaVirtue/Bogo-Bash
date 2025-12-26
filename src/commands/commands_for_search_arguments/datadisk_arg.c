#include <stdio.h>
#include <sys/statvfs.h>
#include "bbash.h"
#include <string.h>

void datadisk_arg(int argc, char **argv){
    int status_search_arg = 0;
    struct arguments list_arguments_datadisk[] = { 
                                        {"-fr",cmd_datadisk_fr},
                                        {"-tt",cmd_datadisk_tt},
                                        {"-all",cmd_datadisk_all},
                                        {NULL,NULL},
                                        };
    for(int i = 0; list_arguments_datadisk[i].name != NULL; i++){
        if(strcmp(argv[1], list_arguments_datadisk[i].name) == 0){
            status_search_arg = 1;
            ((void (*)())list_arguments_datadisk[i].func)();
            break;
        }
    }
    if(status_search_arg == 0){
        printf("Для получения справочника о команде 'datadisk', введите help\n");
    }
}
