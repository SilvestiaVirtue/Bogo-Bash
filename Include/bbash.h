#ifndef BBASH_H
#define BBASH_H

struct commands {
    char *name;
    void (*func)(int argc, char **argv);
    int access;
};

struct arguments {
    char *name;
    void (*func)(int, char **argv);
};

// функции команды
void cmd_exit(int argc, char **argv);
void cmd_hi(int argc, char **argv);
void cmd_time(int argc, char **argv);
void cmd_whoami(int argc, char **argv);
void cmd_datadisk(int argc, char **argv);
void cmd_help(int argc, char **argv);
void cmd_lange(int argc, char **argv);
void cmd_battery(int argc, char **argv);
void cmd_status(int argc, char **argv);
void cmd_mysys(int argc, char **argv);
void cmd_rerun(int argc, char **argv);
void cmd_leave(int argc, char **argv);
void cmd_sleepsys(int argc, char **argv);
void cmd_list(int argc, char **argv);
void cmd_pwd(int argc, char **argv);
void cmd_process(int argc, char **argv);
void cmd_say(int argc, char **argv);
void cmd_go(int argc, char **argv);
void cmd_rm(int argc, char **argv);
void cmd_crdir(int argc, char **argv);
void cmd_readf(int argc, char **argv);
void cmd_killps(int argc, char **argv);
void cmd_clear(int argc, char **argv);
void cmd_ip(int argc, char **argv);
void cmd_write(int argc, char **argv);
void cmd_weather(int argc, char **argv);
void cmd_crfil(int argc, char **argv);
void cmd_finfo(int argc, char **argv);
void cmd_calc(int argc, char **argv);
void cmd_bogofetch(int argc, char **argv);
void cmd_timer(int argc, char **argv);
void cmd_genpass(int argc, char **argv);
void cmd_cpass(int argc, char **argv);

// фукнция валидации пароля
int validated_pswrd();

//функции для поиска аргументтов команд
void datadisk_arg(int argc, char **argv);
void list_arg(int argc, char **argv);
void help_arg(int argc, char **argv);
int go_arg(int argc, char **argv);
void crdir_arg(int argc, char **argv);

// функции команды с флагами и аргументами
void cmd_datadisk_fr(int argc, char **argv);
void cmd_datadisk_tt(int argc, char **argv);
void cmd_datadisk_all(int argc, char **argv);

void cmd_list_fl(int argc, char **argv);
void cmd_list_dir(int argc, char **argv);
void cmd_list_ph(int argc, char **argv);

void cmd_help_ru(int argc, char **argv);
void cmd_help_eng(int argc, char **argv);
void cmd_help_wtcr(int argc, char **argv);

void cmd_crdir_def(int argc, char **argv);
void cmd_crdir_fa(int argc, char **argv);
void cmd_crdir_oo(int argc, char **argv);

void cmd_go_last(int argc, char **argv);
void cmd_go_bc(int argc, char **argv);
void cmd_go_home(int argc, char **argv);

extern char last_working_directory[1024];

#endif
