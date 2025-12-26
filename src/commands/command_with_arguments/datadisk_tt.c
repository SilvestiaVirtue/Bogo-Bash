#include <sys/statvfs.h>
#include <stdio.h>

void cmd_datadisk_tt(){
    struct statvfs buffer;
    int statvfs(const char *path, struct statvfs *buffer);
    statvfs("/", &buffer);
    double total = (double)(buffer.f_blocks * buffer.f_frsize) / (1024 * 1024 * 1024);
    printf("Total memory (GB)   %.2f  \n", total);
}
