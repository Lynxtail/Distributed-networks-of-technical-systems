// Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.

#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    if (a / 100 > 0 && a / 100 < 10) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}