// Ввести целое число и определить, верно ли, что в нём ровно одна цифра «9».

#include <stdio.h>

int main(void) {
    int a, flag = 0;
    scanf("%d", &a);
    do {
        if (a % 10 == 9) flag ^= 1;
        a /= 10;
    } while (a != 0);
    (flag == 1) ? printf("YES") : printf("NO");
    return 0;
}