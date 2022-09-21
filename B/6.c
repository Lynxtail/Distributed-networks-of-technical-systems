// Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры,
// стоящие рядом.

#include <stdio.h>

int main(void) {
    int a, i, a_1, a_2, flag = 0;
    scanf("%d", &a);
    do {
        a_1 = a % 10;
        a /= 10;
        a_2 = a % 10;
        if (a_1 == a_2) {
            flag = 1;
        }
    } while (a != 0);
    (flag == 1) ? printf("YES") : printf("NO");
    return 0;
}