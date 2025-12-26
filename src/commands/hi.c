#include <stdio.h>
#include <unistd.h>
#include <pwd.h>

void cmd_hi(int argc, char **argv){
    struct passwd *pw = getpwuid(getuid());
    if(argc > 1){
        printf("Hi, %s \n", argv[1]);
    }else{
    printf("Hi %s, you in Bogo-Bash or BB bash\n", pw->pw_name);
    }
}
