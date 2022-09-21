// Составить функцию, возведение числа N в степень P. int power(n, p) и привести пример ее
// использования


#include <stdio.h>

int power(int n, int p){
    int i, res = 1;
    for (i = 0; i < p; i++){
        res *= n;
    }
    return res;
}

int main(void){
    int n, p;
    scanf("%d %d", &n, &p);
    printf("%d", power(n, p));
    return 0;
}