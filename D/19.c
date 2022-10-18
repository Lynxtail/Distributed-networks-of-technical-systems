// Дана строка из английских символов, пробелов и знаков препинания. В конце строки символ
// точка. Необходимо реализовать рекурсивную функцию, которая считывает данную строку со
// стандартного потока ввода и возвращает целое число - количество символов 'a' в данной
// строке.
#include <stdio.h>

int count(char tmp, int cnt){
    if (tmp = getchar() != '.') {
        putchar(tmp);
        if (tmp == 'a') cnt++;
        return count(tmp, cnt);
    }
    return cnt;
}

int main(void){
    char tmp;
    printf("%d", count(tmp, 0));
    return 0;
}