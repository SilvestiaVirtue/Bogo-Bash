#include <unistd.h>
#include <pwd.h>
#include <stdio.h>

void cmd_status(int argc, char **argv){
    struct passwd *pw = getpwuid(getuid());
    if(getuid() == 0 ){
        printf("%s, your status: Root\n", pw->pw_name);
    }else{
        printf("%s, your status: Default user\n", pw->pw_name);
    }
}
