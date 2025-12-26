#include <stdio.h>

void cmd_say(int argc, char **argv){
    if(argc < 2){
        printf("Bogo Bash: Нечего сказать");
    }else{
        for(int i = 1; i < argc; i++){
            printf("%s ",argv[i]);
        }
        printf("\n");
    }
}
