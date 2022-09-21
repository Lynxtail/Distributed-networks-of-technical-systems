// Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д.

#include <stdio.h>

int main(void) {
    int a, b = 0;
    scanf("%d", &a);
    do {
        b *= 10;
        b += a % 10;
        a /= 10;
    } while (a != 0);
    printf("%d", b);
    return 0;
}