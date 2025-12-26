#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void cmd_genpass(int argc, char **argv){
    const char* charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+";
    int length_pass = 10;
    if(argc >= 2){
        length_pass = atoi(argv[1]);
        if(length_pass <= 0 || length_pass >= 500){
            printf("Длина пароля должна быть от 1 до 500\n");
            return;
        }}
    if(argc == 3){
        int difficult_pass = atoi(argv[2]);
        if(difficult_pass > 3 || difficult_pass <= 0){
            printf("неизвестная сложность (1-3)");
            return;
        }
        switch (difficult_pass)
        {
            case 1: charset = "abcdefghijklmnopqrstuvwxyz"
                        "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                    break;
            case 2: charset = "abcdefghijklmnopqrstuvwxyz"
                        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                        "0123456789";
                    break;
            case 3: charset = "abcdefghijklmnopqrstuvwxyz"
                        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                        "0123456789"
                        "!@#$%^&*()-_=+";
                    break;
            default:
                    charset = "abcdefghijklmnopqrstuvwxyz"
                                    "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                    break;
        }
    }
    int charset_size = strlen(charset);
    srand(time(NULL));
    printf("New password: ");
    for(int i = 0; i < length_pass; i++){
        int index = rand() % charset_size;
        printf("%c", charset[index]);
    }
    printf("\n");
}
