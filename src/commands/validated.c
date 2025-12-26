#include <stdio.h>
#include <shadow.h>
#include <crypt.h>
#include <string.h>
#include <pwd.h>
#include <unistd.h>

int validated_pswrd(){
    struct passwd *pw = getpwuid(getuid());
    struct spwd *sp = getspnam(pw->pw_name); 
    if(sp == NULL){
        printf("bogo: Запустите Bogo Bash с правами root\n");
        return 0;
    }
    char *input_pass = getpass("Enter password: ");
    if(input_pass == NULL){
        printf("Bogo:   Неверный пароль\n");
        return 0;
    }
    char *hash_pass = crypt(input_pass, sp->sp_pwdp);
    if(hash_pass == NULL){
        printf("Bogo:   ошибка шифрования\n");
        return 0;
    }
    if(hash_pass != NULL && strcmp(sp->sp_pwdp, hash_pass) == 0){
        return 1;
    }else{
        return 0;
    }
}
