// Дан целочисленный массив из 10 элементов. Необходимо определить количество четных и
// нечетных чисел. Если количество чётных чисел больше, чем количество нечётных, заменить
// каждое нечетное число на произведение нечетных цифр в его десятичной записи. Если
// количество нечётных чисел больше или равно количеству чётных, заменить каждое чётное
// число на произведение чётных цифр в его десятичной записи.

#include <stdio.h>

void check(int size, int a[]){
    int tmp, prod, count_1 = 0, count_2 = 0;
    for (int i = 0; i < size; i++)
        if (a[i] % 2 == 0) count_1++;
        else count_2++;
    if (count_1 > count_2) {
        for (int i = 0; i < size; i++)
            if (a[i] % 2 != 0) {
                tmp = a[i];
                prod = 1;
                do {
                    if ((tmp % 10) % 2 != 0) prod *= tmp % 10;
                    tmp /= 10;
                } while (tmp != 0);
                a[i] = prod;
            }
    } else {
        for (int i = 0; i < size; i++)
            if (a[i] % 2 == 0) {
                tmp = a[i];
                prod = 1;
                do {
                    if ((tmp % 10) % 2 == 0) prod *= tmp % 10;
                    tmp /= 10;
                } while (tmp != 0);
                a[i] = prod;
            }
    }
    for (int i = 0; i < size; i++) printf("%d ", a[i]);
}

int main(void){
    int n = 10;
    int arr[10] = {48, 31, 20, 61, 97, 12, 18, 100, 200, 123};
    check(n, arr);
    return 0;
}