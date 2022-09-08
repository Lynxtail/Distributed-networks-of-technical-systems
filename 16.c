#include <stdio.h>

int main(void)
{
    int a, b, c, flag = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a < b && b < c) {
        flag = 1;
    }
    (flag == 1) ? printf("YES") : printf("NO");
    return 0;
}