#include <unistd.h>
#include <stdio.h>

void cmd_pwd(int argc, char **argv){
    char cwd[255];
    if(getcwd(cwd, sizeof(cwd)) != NULL){
        printf("%s\n", cwd);
    }
    else{
        printf("Bogo bash:  Error");
    }
}
