#include <sys/utsname.h>
#include <stdio.h>
#include <time.h>
#include <sys/sysinfo.h>
#include <string.h>

void cmd_bogofetch(int argc, char **argv){
    time_t mytime;
    time(&mytime);
    struct tm *now = localtime(&mytime);

    struct utsname buffer;
    if(uname(&buffer) != 0 ){
        perror("Error");
        return;
    }
    char cpu[128] = "Unknown";
    FILE *fp = fopen("/proc/cpuinfo", "r");
    if (fp) {
        char line[512];
        while (fgets(line, sizeof(line), fp)) {
            if (strncmp(line, "model name", 10) == 0) {
                char *colon = strchr(line, ':');
                if (colon) {
                    strncpy(cpu, colon + 2, 60);
                    cpu[strcspn(cpu, "\n")] = 0;
                    break;
                }
            }
        }
        fclose(fp);
    }
    struct sysinfo info;
    if (sysinfo(&info) != 0) {
    perror("sysinfo");
    return;
}
    long uptime = info.uptime;
    int days = uptime / 86400;
    int hours = (uptime % 86400) / 3600;
    int mins = (uptime % 3600) / 60;

    // тут будет логотип ес что
    printf("\n");
    printf(" ███████████                                                  %s    %02d:%02d:%02d\n", buffer.nodename, now->tm_hour, now->tm_min, now->tm_sec);
    printf("░░███░░░░░███                                                 -----------------------------------------------------------\n");
    printf("░███    ░███  ██████   ███████  ██████                        Name: %s\n", buffer.nodename);
    printf("░██████████  ███░░███ ███░░███ ███░░███ \n");
    printf("░███    ░███░███ ░███░███ ░███░███ ░███                       OS: %s\n", buffer.sysname);
    printf(" ███████████ ░░██████ ░░███████░░██████  \n");
    printf("░░░░░░░░░░   ░░░░░░   ░░░░░███ ░░░░░░                         Kernel: %s\n", buffer.release);                
    printf("                      ███ ░███            \n");
    printf("                      ░░██████                                Shell: Bogo Bash 1.0\n");
    printf("\n");
    printf(" ███████████                    █████                         CPU: %s\n", cpu);
    printf("░███░░░░░███                  ░░███      \n");
    printf(" ░███    ░███  ██████    █████  ░███████                      Architecture: %s\n", buffer.machine);
    printf(" ░██████████  ░░░░░███  ███░░   ░███░░███     \n");
    printf(" ░███░░░░░███  ███████ ░░█████  ░███ ░███                     Date: %02d.%02d.%d\n", now->tm_mday, now->tm_mon + 1, now->tm_year + 1900);
    printf(" ░███    ░███ ███░░███  ░░░░███ ░███ ░███ \n");
    printf(" ███████████ ░░████████ ██████  ████ █████                    Uptime: day: %d  hours: %d  mins: %d  \n", days, hours, mins);
    printf("░░░░░░░░░░░   ░░░░░░░░ ░░░░░░  ░░░░ ░░░░░  \n\n");
}
