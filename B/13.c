// Посчитать количество четных и нечетных цифр числа.

#include <stdio.h>

int main(void) {
    int a, cnt_0 = 0, cnt_1 = 0;
    scanf("%d", &a);
    do {
        if (a % 10 % 2 == 0) cnt_0++;
        if (a % 10 % 2 != 0) cnt_1++;
        a /= 10;
    } while (a != 0);
    printf("%d %d", cnt_0, cnt_1);
    return 0;
}