#include <stdio.h>
#include <time.h>

void cmd_time(int argc, char **argv){
    time_t mytime;
    time(&mytime);
    struct tm *now = localtime(&mytime);
    printf("Time: %02d:%02d:%02d\n", now->tm_hour, now->tm_min, now->tm_sec);
}
