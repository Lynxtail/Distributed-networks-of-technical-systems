// На вход подается произвольное трехзначное число, напечать произведение цифр

#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d", (a % 10) * (a / 10 % 10) * (a / 100));
    return 0;
}
