// Составить функцию, которая определяет сумму всех чисел от 1 до N и привести пример ее
// использования

#include <stdio.h>

int sum(int n){
    int i, res = 0;
    for (i = 1; i <= n; i++) res += i;
    return res;
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}