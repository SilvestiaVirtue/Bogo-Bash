#include <stdio.h>
#include <sys/statvfs.h>
#include "bbash.h"
#include <string.h>

int  go_arg(int argc, char **argv){
    struct arguments list_arguments_go[] = { 
                                        {"-bc",cmd_go_bc},
                                        {"-",cmd_go_last},
                                        {"~",cmd_go_home},
                                        {NULL,NULL},
                                        };
    for(int i = 0; list_arguments_go[i].name != NULL; i++){
        if(strcmp(argv[1], list_arguments_go[i].name) == 0){
            ((void (*)())list_arguments_go[i].func)();
            return 1;
        }
    }
    return 0;
}
