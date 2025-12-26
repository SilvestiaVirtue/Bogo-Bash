#include <dirent.h>
#include <stdio.h>
#include "bbash.h"

void cmd_readf(int argc, char **argv){
    for(int i = 1; i < argc; i++){
        FILE* fp = fopen(argv[i], "r");
        if(!fp){
            perror("Error read file\n");
            continue;
        }
        char buffer[2048];
        while(fgets(buffer, sizeof(buffer), fp)){
            printf("%s", buffer);
        }
        fclose(fp);
    }
}
