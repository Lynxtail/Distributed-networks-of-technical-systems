// Дано трехзначное число, напечатать макисмальную цифру

#include <stdio.h>

int main(void)
{
    int a, a_1, a_2, a_3;
    scanf("%d", &a);
    a_1 = a % 10;
    a_2 = a / 10 % 10;
    a_3 = a / 100;
    if (a_1 > a_2) {
        if (a_1 > a_3)
        {
            printf("%d", a_1);
        } else {
            printf("%d", a_3);
        }
    } else if (a_2 > a_3) {
        printf("%d", a_2);
    } else {
        printf("%d", a_3);
    }
    return 0;
}
