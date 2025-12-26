#include <stdio.h>

#define BOLD_RED "\x1b[1;31m"
#define BOLD_GREEN "\x1b[1;32m"
#define BOLD_BLUE "\x1b[1;34m"

#define RESET "\x1b[0m"

void cmd_help_wtcr(){
        printf("bogo - это специальный аргумент для выполнение команды с рут правами (для работы запустите Bogo Bash с рут правами)");
        printf("crfil  [ИМЯ ФАЙЛА] - Создание файла в текущем директории\n\n");
        printf("calc  [ПРИМЕР] - Калькулятор\n\n");
        printf("cpass  [СЛОЖНОСТЬ (1-3)] [ПАРОЛЬ] - Зашифровать пароль\n\n");
        printf("crdir [АРГУМЕНТ] [ИМЯ] - Создание директории в текущем положении\n\n");
        printf("   -def - Создать директорию в стандартном режиме (0755)\n");
        printf("   -fa - Создать директорию в полном доступе (0777)\n");
        printf("   -oo - Создать директорию в приватном режиме (0700)\n\n");
        printf("exit - Выход из программы\n\n");
        printf("finfo  [ИМЯ ФАЙЛА] - Информация о файле\n\n");
        printf("datadisk - Информация о памяти на диске\n");
        printf("datadisk [-fr] [-tt] [-all] \n");
        printf("   -fr - Информация о свободной памяти на диске\n");
        printf("   -tt - Информация о всей информацией на диске\n");
        printf("   -all - Вся информация о дисках на устройстве\n\n");
        printf("genpass  [КОЛ-ВО СИМВОЛОВ (1-500)] [СЛОЖНОСТЬ(1-3)] - Калькулятор\n\n");
        printf("go  [ПУТЬ] - Смена текущей директории \n\n");
        printf("   - - Перейти в предыдущую директорию  \n");
        printf("   ~ - Перейти в домашнюю директорию\n");
        printf("   -bc - Перейти в директорию назад\n");
        printf("help - Справочник по командам Bogo-Bash\n");
        printf("help [-ru] [-eng] [-wtcr] [NAME COMMAND] \n");
        printf("   -ru - Вывести справочник на русском языке (RU)\n");
        printf("   -eng - Вывести справочник на английском языке (ENG)\n");
        printf("   -wtcr - Вывести справочник без раскраски\n");
        printf("   [-NAME COMMAND] - Справочник о команде\n\n");
        printf("hi - Приветствие\n");
        printf("hi  [ИМЯ] \n\n");
        printf("ip - Информация о сети\n\n");
        printf("killps - Завершение процесса\n");
        printf("killps [ID PROCESS] \n");
        printf("[ДОСТУПНО ТОЛЬКО С 'bogo']\n\n");
        printf("lange - Информация о текущем языке системы\n\n");
        printf("leave - Выйти из аккаунта\n");
        printf("[ДОСТУПНО ТОЛЬКО С 'bogo']\n\n");
        printf("list - Информация о директорий и файлов в текущем местоположении\n");
        printf("list [-fl] [-dir] [-ph] \n");
        printf("   -fl - Вывести список файлов\n");
        printf("   -dir - Вывести список директорий\n");
        printf("   -ph - Вывести пути файлов и директорий\n\n");
        printf("Bogofetch - Обложка Bogo Bash\n");
        printf("battery - Информация и батарее\n\n");
        printf("mysys - Информация о системе\n\n");
        printf("process - Список процессов\n\n");
        printf("pwd - Информация о текущем местоположении\n\n");
        printf("readf - Вывести содержимое файла\n");
        printf("readf [ИМЯ ФАЙЛА] \n\n");
        printf("rerun - Перезагрузка устройства\n");
        printf("[ДОСТУПНО ТОЛЬКО С 'bogo']\n\n");
        printf("rm - Удалить файл\n");
        printf("rm [ИМЯ ФАЙЛА] \n\n");
        printf("[ДОСТУПНО ТОЛЬКО С 'bogo']\n\n");
        printf("say - Вывести что-то в терминал\n");
        printf("say [ТЕКСТ] \n\n");
        printf("sleepsys - Выключение устройства\n");
        printf("[ДОСТУПНО ТОЛЬКО С 'bogo']\n\n");
        printf("status - Информация о текущем статусе пользователя\n\n");
        printf("time - Текущее время системы\n\n");
        printf("timer  [ВРЕМЯ (сек)] - Секундомер\n\n");
        printf("whoami - Информация о тебе\n\n");
        printf("write [СЛОВО] >> [ИМЯ ФАЙЛА] - Записать слово в файл\n\n");
        printf("weather  [ГОРОД] - Информация о погоде в городе\n\n");
}
