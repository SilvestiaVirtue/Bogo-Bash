#include <stdio.h>
#include <unistd.h>
#include "bbash.h"
#include <string.h> 


void cmd_go(int argc, char **argv){
    if(argc == 2){
        if(go_arg(argc, argv)) return;
        char temp_cwd[1024];
        if (getcwd(temp_cwd, sizeof(temp_cwd)) == NULL) return;
        if(chdir(argv[1]) == 0){
            strcpy(last_working_directory, temp_cwd);
            char new_cwd[1024];
            if(getcwd(new_cwd, sizeof(new_cwd))) printf("%s\n", new_cwd);
        }else {
            perror("Bogo Bash");
        }
    }else{
        printf("Bogo Bash: Неправильный ввод команды (обратитесь к справочнику help)\n");
    }
}
