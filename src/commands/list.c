#include <dirent.h>
#include <stdio.h>
#include "bbash.h"

void cmd_list(int argc, char **argv){
    if(argc > 1){
        list_arg(argc, argv);
    }else{
        int count = 0;
        struct dirent *entry;
        DIR *dp  = opendir(".");
        while((entry = readdir(dp)) != NULL){
            if(count == 1){
                printf("\n");
                count = 0;
            }
            if(entry->d_name[0] == '.'){
                count++;
                continue;
            }else{
                printf("%s", entry->d_name);
                count++;
            }
        }
        closedir(dp);
    printf("\n");
    }
}
