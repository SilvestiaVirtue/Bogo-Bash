#include <stdio.h>

void cmd_battery(int argc, char **argv){
    char *battery_file = "/sys/class/power_supply/BAT0/capacity";
    int i;
    FILE * fp= fopen(battery_file, "r");
    if(fp){
        while((i=getc(fp))!= EOF){
            if (i != '\n') { 
                printf("%c", i);
            }
        }
        printf("%% \n");
        fclose(fp);
    }
}
