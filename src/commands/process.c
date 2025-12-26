#include <stdio.h>
#include <ctype.h>
#include <dirent.h> 
#include <string.h>

void cmd_process(int argc, char **argv){
    DIR *dp;
    struct dirent *entry;
    dp = opendir("/proc");
    while((entry = readdir(dp)) != NULL){
        if(isdigit(entry->d_name[0])){
            char comm[255];
            char path[1024];
            snprintf(path, sizeof(path), "/proc/%s/comm", entry->d_name);
            FILE *fp = fopen(path, "r");
            if(fp){
                if(fgets(comm, sizeof(comm), fp)){
                    comm[strcspn(comm, "\n")] = 0;
                    printf("%5s       %s\n", entry->d_name, comm);
                }
            fclose(fp);
            }
        }
    }
    closedir(dp);
}
