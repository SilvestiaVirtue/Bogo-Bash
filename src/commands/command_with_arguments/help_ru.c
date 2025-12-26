#include <stdio.h>

#define BOLD_RED "\x1b[1;31m"
#define BOLD_GREEN "\x1b[1;32m"
#define BOLD_BLUE "\x1b[1;34m"

#define RESET "\x1b[0m"

void cmd_help_ru(){
        printf("crfil " BOLD_GREEN " [ИМЯ ФАЙЛА]" RESET"- Создание файла в текущем директории\n\n");
        printf("calc " BOLD_GREEN " [ПРИМЕР] "RESET"- Калькулятор\n\n");
        printf("cpass " BOLD_GREEN " [СЛОЖНОСТЬ (1-3)] [ПАРОЛЬ] "RESET"- Зашифровать пароль\n\n");
        printf("crdir " BOLD_GREEN " [ИМЯ] " RESET "- Создание директории в текущем положении\n\n");
        printf(BOLD_BLUE "   -def" RESET " - Создать директорию в стандартном режиме (0755)\n");
        printf(BOLD_BLUE "   -fa" RESET " - Создать директорию в полном доступе (0777)\n");
        printf(BOLD_BLUE "   -oo" RESET " - Создать директорию в приватном режиме (0700)\n\n");
        printf("exit - Выход из программы\n\n");
        printf("finfo " BOLD_GREEN " [ИМЯ ФАЙЛА] "RESET"- Информация о файле\n\n");
        printf("datadisk - Информация о памяти на диске\n");
        printf("datadisk [-fr] [-tt] [-all] \n");
        printf(BOLD_BLUE "   -fr" RESET " - Информация о свободной памяти на диске\n");
        printf(BOLD_BLUE "   -tt" RESET " - Информация о всей информацией на диске\n");
        printf(BOLD_BLUE "   -all" RESET " - Вся информация о дисках на устройстве\n\n");
        printf("genpass " BOLD_GREEN " [КОЛ-ВО СИМВОЛОВ (1-500)] [СЛОЖНОСТЬ(1-3)] "RESET"- Калькулятор\n\n");
        printf("go " BOLD_GREEN " [ПУТЬ] " RESET "- Смена текущей директории \n\n");
        printf(BOLD_BLUE "   -" RESET " - Перейти в предыдущую директорию \n");
        printf(BOLD_BLUE "   ~" RESET " - Перейти в домашнюю директорию\n");
        printf(BOLD_BLUE "   -bc" RESET " - Перейти в директорию назад\n");
        printf("help - Справочник по командам Bogo-Bash\n");
        printf("help [-ru] [-eng] [-wtcr] [NAME COMMAND] \n");
        printf(BOLD_BLUE "   -ru" RESET " - Вывести справочник на русском языке (RU)\n");
        printf(BOLD_BLUE "   -eng" RESET " - Вывести справочник на английском языке  (ENG)\n");
        printf(BOLD_BLUE "   -wtcr" RESET " - Вывести справочник без раскраски\n");
        printf(BOLD_BLUE "   [-NAME COMMAND]" RESET " - Справочник о команде\n\n");
        printf("hi - Приветствие\n");
        printf("hi " BOLD_GREEN " [ИМЯ] " RESET "\n\n");
        printf("ip - Информация о сети\n\n");
        printf("killps - Завершение процесса\n");
        printf("killps" BOLD_GREEN " [ID PROCESS] " RESET "\n");
        printf(BOLD_RED "[ДОСТУПНО ТОЛЬКО С 'bogo']" RESET"\n\n" );
        printf("lange - Информация о текущем языке системы\n\n");
        printf("leave - Выйти из аккаунта\n");
        printf(BOLD_RED "[ДОСТУПНО ТОЛЬКО С 'bogo']" RESET "\n\n");
        printf("list - Информация о директорий и файлов в текущем местоположении\n");
        printf("list [-fl] [-dir] [-ph] \n");
        printf(BOLD_BLUE "   -fl" RESET " - Вывести список файлов\n");
        printf(BOLD_BLUE "   -dir" RESET " - Вывести список директорий\n");
        printf(BOLD_BLUE "   -ph" RESET " - Вывести пути файлов и директорий\n\n");
        printf("Bogofetch - Обложка Bogo Bash\n");
        printf("battery - Информация и батарее\n\n");
        printf("mysys - Информация о системе\n\n");
        printf("process - Список процессов\n\n");
        printf("pwd - Информация о текущем местоположении\n\n");
        printf("readf - Вывести содержимое файла\n");
        printf("readf" BOLD_GREEN " [ИМЯ ФАЙЛА] " RESET "\n\n");
        printf("rerun - Перезагрузка устройства\n");
        printf(BOLD_RED "[ДОСТУПНО ТОЛЬКО С 'bogo']" RESET "\n\n");
        printf("rm - Удалить файл\n");
        printf("rm" BOLD_GREEN " [ИМЯ ФАЙЛА] " RESET "\n\n");
        printf(BOLD_RED "[ДОСТУПНО ТОЛЬКО С 'bogo']" RESET "\n\n");
        printf("say - Вывести что-то в терминал\n");
        printf("say" BOLD_GREEN " [ТЕКСТ] " RESET "\n\n");
        printf("sleepsys - Выключение устройства\n");
        printf(BOLD_RED "[ДОСТУПНО ТОЛЬКО С 'bogo']" RESET "\n\n");
        printf("status - Информация о текущем статусе пользователя\n\n");
        printf("time - Текущее время системы\n\n");
        printf("timer " BOLD_GREEN " [ВРЕМЯ (сек)] "RESET"- Секундомер\n\n");
        printf("whoami - Информация о тебе\n\n");
        printf("write" BOLD_GREEN " [СЛОВО] >> [ИМЯ ФАЙЛА] "RESET"- Записать слово в файл\n\n");
        printf("weather " BOLD_GREEN " [ГОРОД] "RESET"- Информация о погоде в городе\n\n");
}
