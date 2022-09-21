// Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры, НЕ
// обязательно стоящие рядом.

#include <stdio.h>

int main(void) {
    int a, b, i, a_1, a_2, flag = 0;
    scanf("%d", &a);
    do {
        a_1 = a % 10;
        a /= 10;
        b = a;
        do {
            a_2 = b % 10;
            b /= 10;
            if (a_1 == a_2) {
                flag = 1;
                break;
            }
        } while (b != 0);
    } while (a != 0);
    (flag == 1) ? printf("YES") : printf("NO");
    return 0;
}