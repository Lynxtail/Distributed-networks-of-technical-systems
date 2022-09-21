// Дан текст состоящий из английских букв и цифр, заканчивается символом «.» Перевести все
// заглавные английские буквы в строчные.


#include <stdio.h>

int main(void){
    char str;
    while((str = getchar()) != '.'){
        if (str >= 'A' && str <= 'Z') putchar(str + 'a' - 'A');
        else putchar(str);
    }
    return 0;
}