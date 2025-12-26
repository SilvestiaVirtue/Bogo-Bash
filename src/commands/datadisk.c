#include <sys/statvfs.h>
#include <stdio.h>
#include "bbash.h"

void cmd_datadisk(int argc, char **argv){
    if(argc > 1){
        datadisk_arg(argc, argv);
    }else{
        struct statvfs buffer;
        int statvfs(const char *path, struct statvfs *buffer);
        statvfs("/", &buffer);
        double total = (double)(buffer.f_blocks * buffer.f_frsize) / (1024 * 1024 * 1024);
        double free = (double)(buffer.f_bavail * buffer.f_frsize) / (1024 * 1024 * 1024);
        int percent = (int)((free * 100) / total);
        printf("Total (GB)  %.2f\n", total);
        printf("Free (GB)  %.2f  (%d%%) \n", free, percent);
    }
}
