#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void cmd_cpass(int argc, char **argv){
    if(argc < 2){
        printf("Bogo Bash:  Неправильный ввод (обратитесь к справочнику 'help')\n");
        return;
    }
    const char* charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+";
    char* old_password;
    int difficult_pass = 3;
    if(argc == 3){
        difficult_pass = atoi(argv[1]);
        old_password = argv[2];
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
    }else{
        old_password = argv[1];
    }

    srand(time(NULL)); 
    printf("old password: %s\n", old_password);
    printf("hash password: ");
    int charset_size = strlen(charset);
    int size = strlen(old_password);
    for(int i = 0; i < size; i++){
        int index = rand() % charset_size;
        printf("%c", charset[index]);
    }
    printf("\n");
}
