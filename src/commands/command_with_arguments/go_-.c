#include <stdio.h>
#include <unistd.h>
#include "bbash.h"
#include <string.h>

void cmd_go_last(int argc, char **argv){
    if(last_working_directory[0] == '\0'){
        printf("Bogo Bash:  Путь не сохранен\n");
        return;
    }
    char current_path[1024];
    getcwd(current_path, sizeof(current_path));
    if(chdir(last_working_directory) == 0){
        printf("%s\n", last_working_directory);
        strcpy(last_working_directory, current_path);
    }else{
        perror("Bogo Bash:  \n");
    }
}
