// Ввести два целых числа a и b (a ≤ b) и вывести квадраты всех чисел от a до b

#include <stdio.h>

int main(void) {
    int a, b, i;
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++) {
        printf("%d ", i*i);
    }
    return 0;
}