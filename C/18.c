// Составить логическую функцию, которая определяет, что текущий символ это цифра.
// Написать программу считающую количество цифр в тексте

#include <stdio.h>

int is_digit(char c){
    if (c >= '0' && c <= '9') return 1;
    return 0;
}

int main(void){
    char str;
    int cnt = 0;
    while((str = getchar()) != '.')
        if (is_digit(str) == 1) cnt++;
    printf("%d", cnt);
    return 0;
}