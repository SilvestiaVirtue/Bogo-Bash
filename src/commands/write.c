#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cmd_write(int argc, char **argv){
    if(argc == 4){
        if(strcmp(argv[2], ">>") != 0){
            printf("Bogo Bash:  Неправильный ввод команды (обратитесь к справочнику 'help')\n");
            return;
        }
        FILE* fp = fopen(argv[3], "a");
        if(fp == NULL){
            printf("Bogo Bash:  Ошибка при записи\n");
            return;
        }
        fprintf(fp, "%s\n", argv[1]);
        fclose(fp);
    }else{
        printf("Bogo Bash:  Неправильный ввод команды (обратитесь к справочнику 'help')\n");
    }
}
