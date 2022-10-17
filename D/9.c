// Дано натуральное число N. Вычислите сумму его цифр. Необходимо составить рекурсивную
// функцию.
#include <stdio.h>

int sum_digits(int n, int sum){
    sum += n % 10;
    if (n / 10 != 0) return sum_digits(n / 10, sum);
    return sum;
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", sum_digits(n, 0));
    return 0;
}