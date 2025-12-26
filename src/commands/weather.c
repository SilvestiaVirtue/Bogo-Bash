#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cmd_weather(int argc, char **argv){
    char buf[1024];
    if(argc == 2){
        snprintf(buf, sizeof(buf), "curl -s wttr.in/%s?0m", argv[1]);
        system(buf);
    }else if(argc == 1){
        system("curl -s wttr.in?0m");
    }else{
        printf("Bogo Bash:  Неправильный ввод (обратитесь к справочнику 'help')\n");
    }
}
