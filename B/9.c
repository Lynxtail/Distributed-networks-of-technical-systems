// Ввести целое число и определить, верно ли, что все его цифры четные.

#include <stdio.h>

int main(void) {
    int a, flag = 1;
    scanf("%d", &a);
    do {
        if (a % 10 % 2 != 0) flag = 0;
        a /= 10;
    } while (a != 0);
    (flag == 1) ? printf("YES") : printf("NO");
    return 0;
}