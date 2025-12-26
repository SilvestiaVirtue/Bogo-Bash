#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void cmd_go_home(int argc, char **argv){
    char* home = getenv("HOME");
    if(home == NULL){
        printf("Bogo Bash:  Путь не найден\n");
        return;
    }
    if(chdir(home) == 0){
        char cwd[1024];
        if(getcwd(cwd, sizeof(cwd)) != NULL){
            printf("%s\n", cwd);
        }
    }else{
        perror("Bogo Bash:  ");
    }
}
