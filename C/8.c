// Составить функцию, которая переводит латинскую строчную букву в заглавную. И показать
// пример ее использования

#include <stdio.h>

void enlarge(char str){
    if (str >= 'a' && str <= 'z') putchar(str - 'a' + 'A');
    else putchar(str);
}

int main(void){
    char str;
    while((str = getchar()) != '.') enlarge(str);
    return 0;
}