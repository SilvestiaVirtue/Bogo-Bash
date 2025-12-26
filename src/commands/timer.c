#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void cmd_timer(int argc, char **argv){
    if(argc == 2){
        int n = atoi(argv[1]);
        if(n <= 0){
            printf("Введите число больше нуля\n");
            return;
        }
        printf("Start...\n");

        for(int i = n; i > 0; i--){
            printf("\rSecond: %-2d", i);
            fflush(stdout);
            sleep(1);
        }
        printf("\a\nEnd...\n");
    }else{printf("Bogo Bash:   Неправильный ввод (обратитесь к справочнику 'help')\n");};
}
