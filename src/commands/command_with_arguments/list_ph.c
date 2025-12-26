#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void cmd_list_ph(){
    struct dirent *entry;
    DIR *dp  = opendir(".");
    char cwd[2048];
    if(getcwd(cwd, sizeof(cwd)) == NULL){
        printf("Bogo: Произошла ошибка");
    }
    while((entry = readdir(dp)) != NULL){
        if(entry->d_name[0] == '.'){
            continue;
        }
        printf("%s  -->   %s\n", cwd, entry->d_name);
    }
    closedir(dp);
}
