#include <stdio.h>
#include <unistd.h>
#include <pwd.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include "bbash.h"

char last_working_directory[1024] = "";

int main(){
    struct commands list_commands[] = { {"exit", cmd_exit, 0},
                                        {"hi", cmd_hi, 0},
                                        {"time", cmd_time, 0},
                                        {"lange", cmd_lange, 0},
                                        {"help", cmd_help, 0},
                                        {"datadisk", cmd_datadisk, 0},
                                        {"battery", cmd_battery, 0},
                                        {"status", cmd_status, 0},
                                        {"mysys", cmd_mysys, 0},
                                        {"whoami", cmd_whoami, 0},
                                        {"rerun", cmd_rerun, 1},
                                        {"leave", cmd_leave, 1},
                                        {"pwd", cmd_pwd, 0},
                                        {"list", cmd_list, 0},
                                        {"process", cmd_process, 0},
                                        {"sleepsys", cmd_sleepsys, 1},
                                        {"crdir", cmd_crdir, 0},
                                        {"go", cmd_go, 0},
                                        {"killps", cmd_killps, 1},
                                        {"readf", cmd_readf, 0},
                                        {"rm", cmd_rm, 1},
                                        {"say", cmd_say, 0},
                                        {"clear", cmd_clear, 0},
                                        {"ip", cmd_ip, 0},
                                        {"write", cmd_write, 0},
                                        {"weather", cmd_weather, 0},
                                        {"crfil", cmd_crfil, 0},
                                        {"finfo", cmd_finfo, 0},
                                        {"calc", cmd_calc, 0},
                                        {"bogofetch", cmd_bogofetch, 0},
                                        {"timer", cmd_timer, 0},
                                        {"genpass", cmd_genpass, 0},
                                        {"cpass", cmd_cpass, 0},
                                        {NULL, NULL, 0 }
                                        };
    struct passwd *pw = getpwuid(getuid());
    while(1){
        char cmd[255];
        char *argv[64];
        int argc = 0;
        int status_search_cmd = 0;
        int root = 0;
        int start_idx = 0;
        
        char* current_path = getcwd(NULL, 0);
        char* last_name = strrchr(current_path, '/');
        if (last_name) {
            last_name++;
        } else {
            last_name = current_path;
        }
        printf("[%s] %s >> ", pw->pw_name, last_name);
        if(!fgets(cmd, sizeof(cmd), stdin)){
            break;
        }
        cmd[strcspn(cmd, "\n")] = 0;

        char *token = strtok(cmd, " ");
        while(token != NULL){
            argv[argc++] = token;
            token = strtok(NULL, " ");
        }
        if (argc == 0 ){
            continue;
        }
        if(strcmp(argv[0], "bogo") == 0){
            if(argc < 2){
                printf("Bogo:   после 'bogo' должна идти команда (обратитесь к справочнику help)\n");
                continue;
            }
            if(validated_pswrd()){
                root = 1;
                start_idx = 1;
            }else{
                printf("Bogo:   Invalid password\n");
                continue;
            }
        }
        for(int i = 0; list_commands[i].name != NULL; i++){
            if(strcmp(argv[start_idx], list_commands[i].name) == 0){
                status_search_cmd = 1;
                if(list_commands[i].access == 1 && root == 0){
                    printf("bogo: Команда доступна только с правами root\n");
                    break;
                }else{
                    list_commands[i].func(argc - start_idx, &argv[start_idx]);
                    break;
                }
            }
        } 
        if(status_search_cmd == 0){
            printf("Bogo-Bash: Command Not Found\n");
        }
    }
    return 0;
}
