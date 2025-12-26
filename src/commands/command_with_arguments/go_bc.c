#include <stdio.h>
#include <unistd.h>

void cmd_go_bc(int argc, char **argv){
    if(chdir("..") == 0){
        char cwd[1024];
        if(getcwd(cwd, sizeof(cwd)) != NULL){
            printf("%s\n", cwd);
        }
    }else{
        perror("Bogo Bash:  ");
    }
}
