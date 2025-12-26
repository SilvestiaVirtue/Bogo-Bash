#include <sys/stat.h>
#include <stdio.h>
#include <time.h>

void cmd_finfo(int argc, char **argv){
    struct stat st;
    if(argc == 2){
        if(stat(argv[1], &st) == 0){
            if(S_ISDIR(st.st_mode)){
                printf("Bogo Bash:  Это директория\n");
                return;
            }
            printf("(%s) Размер: %ld (Byte)\n", argv[1], st.st_size);
            printf("(%s) Права: %o \n", argv[1], st.st_mode);
            printf("(%s) Последние изменения: %s ", argv[1], ctime(&st.st_mtime));
            printf("(%s) Владелец: %d \n", argv[1], st.st_uid);
        }else{
            perror("Bogo Bash:  ");
        }
    }else{
        printf("Bogo Bash:  Нету имени файла (обратитесь к справочнику 'help')\n");
    }
}
