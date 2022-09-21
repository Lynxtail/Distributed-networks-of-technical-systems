// Ввести целое число и найти сумму его цифр.

#include <stdio.h>

int main(void) {
    int a, i, sum = 0;
    scanf("%d", &a);
    do {
        sum += a % 10;
        a /= 10;
    } while (a != 0);
    printf("%d", sum);
    return 0;
}