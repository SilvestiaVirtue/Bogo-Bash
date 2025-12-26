#define _DEFAULT_SOURCE
#include <dirent.h>
#include <stdio.h>

void cmd_list_fl(){
    int count = 0;
    struct dirent *entry;
    DIR *dp  = opendir(".");
    while((entry = readdir(dp)) != NULL){
        if(count == 1){
            printf("\n");
            count = 0;
        }
        if(entry->d_name[0] == '.'){
        continue;
        }else{
            if(entry->d_type == DT_REG){
                printf("%s", entry->d_name);
                count++;
            }
        }
    }
    printf("\n");
    closedir(dp);
}
