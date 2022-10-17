// Дано натуральное число n ≥ 1. Проверьте, является ли оно простым. Программа должна
// вывести слово YES, если число простое или NO в противном случае . Необходимо составить
// рекурсивную функцию и использовать ее.
#include <stdio.h>

int is_prime(int n, int divider){
    if (n <= 2 || divider * divider > n) return 1;
    return n % divider && is_prime(n, ++divider);
}

int main(void){
    int n;
    scanf("%d", &n);
    (is_prime(n, 2) == 1) ? printf("YES") : printf("NO");
    return 0;
}