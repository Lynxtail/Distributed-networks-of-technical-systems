// Составить функцию, модуль числа и привести пример ее использования.


#include <stdio.h>

int abs(int a){
    if (a < 0) a = -a;
    return a;
}

int main(void){
    int a;
    scanf("%d", &a);
    printf("%d", abs(a));
    return 0;
}