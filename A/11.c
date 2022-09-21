// Напечатать сумму максимума и минимума.

#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int numbers[] = {a, b, c, d, e};
    int i, max_num, min_num;
    max_num = a;
    min_num = b;
    for (i = 0; i < 5; i++){
        if (max_num < numbers[i]) {
            max_num = numbers[i];
        }
        if (min_num > numbers[i]) {
            min_num = numbers[i];
        }
    }
    printf("%d", max_num + min_num);
    return 0;
}
