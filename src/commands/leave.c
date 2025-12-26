#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void cmd_leave(int argc, char **argv){
    char choice[20];
    printf("You are sure? (y/n)\n");
    scanf("%s", choice);
    if(strcmp("y", choice) == 0){
        system("loginctl terminate-user $USER");
    }else if(strcmp("n", choice) == 0){
        printf("[CANCEL]\n");
        return;
    }
}
