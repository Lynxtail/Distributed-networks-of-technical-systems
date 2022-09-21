// Ввести пять чисел и найти наименьшее из них

#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int numbers[] = {a, b, c, d, e};
    int i, min_num;
    min_num = a;
    for (i = 1; i < 5; i++){
        if (min_num > numbers[i]) {
            min_num = numbers[i];
        }
    }
    printf("%d", min_num);
    return 0;
}
