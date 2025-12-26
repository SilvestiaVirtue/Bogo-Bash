#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "bbash.h"

void cmd_crdir(int argc, char **argv){
    if(argc > 2){
        crdir_arg(argc, argv);
        return;
    }
    if(argc == 2){
    int rights = 0755;
    int result =  mkdir(argv[1], rights);
    if(result == 0){
        printf("Bogo Bash: Done\n");
    }else{
        printf("Bogo Bash:  Error creating directory '%s' \n", argv[1]);
    }
    }else{
        printf("Bogo Bash:  Нечего создавать (обратитесь к справочнику 'help')\n");
    }
}
