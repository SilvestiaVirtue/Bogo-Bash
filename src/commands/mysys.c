#include <sys/utsname.h>
#include <stdio.h>


void cmd_mysys(int argc, char **argv){
    struct utsname buffer;
    if(uname(&buffer) != 0 ){
        perror("Error");
        return;
    }
    int uname(struct utsname * buffer);  
    printf("System: %s\n",buffer.sysname);
    printf("Name: %s\n",buffer.nodename);
    printf("Version: %s\n",buffer.release);
    printf("Architecture: %s\n",buffer.machine);
}
