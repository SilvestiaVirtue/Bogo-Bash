#include <stdlib.h>
#include <stdio.h>

void cmd_lange(int argc, char **argv){
    char *lang = getenv("LANG");
    printf("Languary: %s \n", lang);
}
