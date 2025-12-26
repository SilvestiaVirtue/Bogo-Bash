#include <stdio.h>
#include <stdlib.h>

void cmd_calc(int argc, char **argv){
    if(argc == 4){
        int a = atoi(argv[1]);
        int b = atoi(argv[3]);
        char sign = argv[2][0];
        switch (sign)
        {
            case '+':
                printf("%d\n", a + b);
                break;
            case '-':
                printf("%d\n", a - b);

                break;
            case '*':
                printf("%d\n", a * b);
                break;
            case '/':
                if(b == 0){
                    printf("На ноль делить нельзя\n");
                    break;
                }else{
                    printf("%d\n", a / b);
                    break;
                }
        default:
        printf("Оператор %c не найден ", sign);
        }
    }else{
        printf("Bogo Bash:  Неправильный ввод (обратитесь к справочнику 'help')\n");
    }
}
