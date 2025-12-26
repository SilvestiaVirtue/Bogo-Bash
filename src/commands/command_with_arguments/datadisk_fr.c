#include <sys/statvfs.h>
#include <stdio.h>

void cmd_datadisk_fr(){
    struct statvfs buffer;
    int statvfs(const char *path, struct statvfs *buffer);
    statvfs("/", &buffer);
    double free = (double)(buffer.f_bavail * buffer.f_frsize) / (1024 * 1024 * 1024);
    printf("Free memory (GB)    %.2f \n", free);
}
