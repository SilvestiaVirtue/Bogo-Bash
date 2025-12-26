#include <stdio.h>
#include <unistd.h>
#include <pwd.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

void cmd_whoami(int argc, char **argv){
    struct passwd *pw = getpwuid(getuid());
    printf("Hey, you %s\n", pw->pw_name);
}
