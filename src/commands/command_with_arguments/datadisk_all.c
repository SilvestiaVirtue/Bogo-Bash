#include <sys/statvfs.h>
#include <stdio.h>
#include <string.h>

void cmd_datadisk_all(){
    struct statvfs buffer;
    int statvfs(const char *path, struct statvfs *buffer);
    statvfs("/", &buffer);
    FILE *fp = fopen("/proc/mounts", "r");
    if(fp == NULL){
        printf("Bogo-bash:  ошибка при поиске диска");
        return;
    }
    char line[255];
    char dev[64]; char mounts[64]; char type[64];
    while(fgets(line, sizeof(line), fp)){
        if(sscanf(line,"%s  %s  %s", dev, mounts, type) == 3){
            if(strncmp(dev, "/dev/", 5) == 0 &&
                strcmp("tmpfs", type) != 0 &&
                strcmp("devtmpfs", type) != 0 &&
                strcmp("devpts", type) != 0 &&
                strcmp("mqueue", type) != 0){
                    if(statvfs(mounts, &buffer) == 0 ){
                        double total = (double)(buffer.f_blocks * buffer.f_frsize) / (1024 * 1024 * 1024);
                        double free = (double)(buffer.f_bavail * buffer.f_frsize) / (1024 * 1024 * 1024);
                        int percent = (int)((free * 100) / total);
                        printf("%-15s  %-15s  %-15s  %.2f  %.2f  %d\n", dev, mounts, type, total, free, percent);
                    }
                }
        }
    }
    fclose(fp);
}
