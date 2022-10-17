// Написать рекурсивную функцию возведения целого числа n в степень p.

#include <stdio.h>

int recursion_pow(int n, int p){
    if (p != 0) return n * recursion_pow(n, p - 1);
    return 1;
}

int main(void){
    int n, p;
    scanf("%d %d", &n, &p);
    printf("%d", recursion_pow(n, p));
    return 0;
}