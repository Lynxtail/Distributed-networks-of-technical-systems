// Дана последовательность ненулевых целых чисел, в конце последовательности число 0.
// Посчитать количество чисел.

#include <stdio.h>

int main(void) {
    int a, cnt = 0;
    scanf("%d", &a);
    while (a != 0) {
        cnt++;
        scanf(" %d", &a);
    }
    printf("%d", cnt);
    return 0;
}