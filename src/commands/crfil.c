#include <stdio.h>

void cmd_crfil(int argc, char **argv){
    if(argc == 2){
        FILE* fp = fopen(argv[1], "a");
        if(fp == NULL){
            printf("Bogo Bash:  Ошибка при создании файла\n");
            return;
        }
        printf("Bogo Bash:  Done\n");
        fclose(fp);
    }else{
        printf("Bogo Bash:  Неправильный ввод (обратитесь к справочнику 'help')\n");
    }
}
