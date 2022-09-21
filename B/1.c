// Ввести натуральное число вывести квадраты и кубы всех чисел от 1 до этого числа. Число не
// превосходит 100.

#include <stdio.h>

int main(void) {
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d %d %d\n", i, i*i, i*i*i);
    }
    return 0;
}