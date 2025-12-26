#include <stdio.h>
#include <string.h>

void cmd_rm(int argc, char **argv){
    if(argc < 2){
        printf("Bogo Bash:  Нечего удалять");
         return;
    }
    FILE* fp =fopen(argv[1], "r");
    if(!fp){
        printf("Bogo Bash:  файла не существует\n");
        return;
    }else{
        fclose(fp);
        char choice[4];
        printf("Are you sure? (y/n)\n");
        scanf(" %c", choice);
        if(choice[0] == 'y'){
            remove(argv[1]);
            printf("Done\n");
            return;
        }else if(choice[0] == 'n'){
            printf("Cancel\n");
            return;
        }else{
            return;
        }
    }
}
