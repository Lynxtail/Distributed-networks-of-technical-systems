// Дана строка заканчивающаяся символом точка '.' Напечатать строку наоборот. Реализуйте
// рекурсивную функцию, которая считывает и печатает строку наоборот
#include <stdio.h>

void reverse_string(void){
    char tmp = getchar();
    if (tmp != '.'){
        reverse_string();
        putchar(tmp);
    }
}

int main(void){
    reverse_string();
    return 0;
}