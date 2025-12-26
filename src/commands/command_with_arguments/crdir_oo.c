#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

void cmd_crdir_oo(int argc, char **argv){
    if(argc == 3){
        int rights = 0700;
        int result =  mkdir(argv[2], rights);
        if(result == 0){
            printf("Bogo Bash: Done\n");
        }else{
            printf("Bogo Bash:  Error creating directory '%s' \n", argv[2]);
        }
        }else{
            printf("Bogo Bash:  Нечего создавать (обратитесь к справочнику 'help')\n");
    }
}
