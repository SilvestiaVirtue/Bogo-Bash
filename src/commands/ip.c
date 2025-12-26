#include <stdio.h>
#include <stdlib.h>

void cmd_ip(int argc, char **argv){
    system("ip -4 -br addr show scope global");
}
