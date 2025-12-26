#include <stdio.h>

#define BOLD_RED "\x1b[1;31m"
#define BOLD_GREEN "\x1b[1;32m"
#define BOLD_BLUE "\x1b[1;34m"

#define RESET "\x1b[0m"

void cmd_help_eng(){
        printf(BOLD_RED "bogo - the option is a special argument for running a command as root (to use it, run Bogo Bash as root)\n\n" RESET);
        printf("crfil " BOLD_GREEN " [FILE NAME]" RESET "- Create a file in the current directory\n\n");
        printf("calc " BOLD_GREEN " [EXPRESSION] " RESET "- Calculator\n\n");
        printf("cpass " BOLD_GREEN " [COMPLEXITY (1-3)] [PASSWORD] " RESET "- Encrypt a password\n\n");
        printf("crdir " BOLD_GREEN " [NAME] " RESET "- Create a directory in the current location\n\n");
        printf(BOLD_BLUE "   -def" RESET " - Create a directory in standard mode (0755)\n");
        printf(BOLD_BLUE "   -fa" RESET " - Create a directory with full access (0777)\n");
        printf(BOLD_BLUE "   -oo" RESET " - Create a directory in private mode (0700)\n\n");
        printf("exit - Exit the program\n\n");
        printf("finfo " BOLD_GREEN " [FILE NAME] " RESET "- File information\n\n");
        printf("datadisk - Disk storage information\n");
        printf("datadisk [-fr] [-tt] [-all] \n");
        printf(BOLD_BLUE "   -fr" RESET " - Information regarding free disk space\n");
        printf(BOLD_BLUE "   -tt" RESET " - Information regarding total disk usage\n");
        printf(BOLD_BLUE "   -all" RESET " - Comprehensive information for all device disks\n\n");
        printf("genpass " BOLD_GREEN " [LENGTH (1-500)] [COMPLEXITY (1-3)] " RESET "- Password generator\n\n");
        printf("go " BOLD_GREEN " [PATH] " RESET "- Change the current directory\n\n");
        printf(BOLD_BLUE "   -" RESET " - Navigate to the previous directory\n");
        printf(BOLD_BLUE "   ~" RESET " - Navigate to the home directory\n");
        printf(BOLD_BLUE "   -bc" RESET " - Move back to the parent directory\n");
        printf("help - Bogo-Bash command reference\n");
        printf("help [-ru] [-eng] [-wtcr] [COMMAND NAME] \n");
        printf(BOLD_BLUE " -ru" RESET " - Display help in Russian (RU)\n");
        printf(BOLD_BLUE "   -eng" RESET " - Display help in English (ENG)\n");
        printf(BOLD_BLUE "   -wtcr" RESET " - Display help without syntax highlighting\n");
        printf(BOLD_BLUE "   -[COMMAND NAME]" RESET " - Information regarding a specific command\n\n");
        printf("hi - Greeting\n");
        printf("hi " BOLD_GREEN " [NAME] " RESET "\n\n");
        printf("ip - Network interface information\n\n");
        printf("killps - Terminate a process\n");
        printf("killps" BOLD_GREEN " [PROCESS ID] " RESET "\n");
        printf(BOLD_RED "[AVAILABLE ONLY WITH 'bogo' PRIVILEGES]" RESET "\n\n");
        printf("lange - Current system language information\n\n");
        printf("leave - Log out of the account\n");
        printf(BOLD_RED "[AVAILABLE ONLY WITH 'bogo' PRIVILEGES]" RESET "\n\n");
        printf("list - List files and directories in the current location\n");
        printf("list [-fl] [-dir] [-ph] \n");
        printf(BOLD_BLUE "   -fl" RESET " - Display a list of files\n");
        printf(BOLD_BLUE "   -dir" RESET " - Display a list of directories\n");
        printf(BOLD_BLUE "   -ph" RESET " - Display file and directory paths\n\n");
        printf("Bogofetch - Bogo Bash splash screen\n");
        printf("battery - Battery status information\n\n");
        printf("mysys - System information\n\n");
        printf("process - Process list\n\n");
        printf("pwd - Current directory path information\n\n");
        printf("readf - Display file content\n");
        printf("readf" BOLD_GREEN " [FILE NAME] " RESET "\n\n");
        printf("rerun - Reboot the device\n");
        printf(BOLD_RED "[AVAILABLE ONLY WITH 'bogo' PRIVILEGES]" RESET "\n\n");
        printf("rm - Delete a file\n");
        printf("rm" BOLD_GREEN " [FILE NAME] " RESET "\n\n");
        printf(BOLD_RED "[AVAILABLE ONLY WITH 'bogo' PRIVILEGES]" RESET "\n\n");
        printf("say - Output text to the terminal\n");
        printf("say" BOLD_GREEN " [TEXT] " RESET "\n\n");
        printf("sleepsys - Shut down the device\n");
        printf(BOLD_RED "[AVAILABLE ONLY WITH 'bogo' PRIVILEGES]" RESET "\n\n");
        printf("status - Current user status information\n\n");
        printf("time - Current system time\n\n");
        printf("timer " BOLD_GREEN " [SECONDS] " RESET "- Countdown timer\n\n");
        printf("whoami - User identity information\n\n");
        printf("write" BOLD_GREEN " [WORD] >> [FILE NAME] " RESET "- Write a word to a file\n\n");
        printf("weather " BOLD_GREEN " [CITY] " RESET "- Weather information for a specified city\n\n");
}
