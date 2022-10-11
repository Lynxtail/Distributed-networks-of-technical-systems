// Необходимо составить функцию, которая определяет, сколько зерен попросил положить на Nую клетку изобретатель 
// шахмат (на 1-ую – 1 зерно, на 2-ую – 2 зерна, на 3-ю – 4 зерна, …)

#include <stdio.h>

int count(int n){
    int i, res = 1;
    for (i = 1; i < n; i++) res *= 2;
    return res;
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", count(n));
    return 0;
}