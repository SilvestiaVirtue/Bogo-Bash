#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void cmd_killps(int argc, char **argv){
    if(argc == 2){
        int num = atoi(argv[1]);
        if(kill(num, SIGTERM) == 0){
            printf("Bogo Bash:  Done, you killed %d (ID) process\n", num);
        }else{
            perror("Bogo Bash:  ");
        }
    }else{
        printf("Bogo Bash:  Нечего завершать (обратитесь к справочнику 'help')\n");
    }
}
