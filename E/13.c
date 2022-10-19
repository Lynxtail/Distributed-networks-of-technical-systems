// Считать массив из 10 элементов и отобрать в другой массив все числа, у которых число
// десятков – ноль

#include <stdio.h>

int main(void){
    int i, n = 10;
    int first_arr[n], second_arr[n];
    for (i = 0; i < n; i++) scanf("%d", &first_arr[i]);
    int j = 0;
    for (i = 0; i < n; i++)
        if (first_arr[i] % 100 / 10 == 0) 
            second_arr[j++] = first_arr[i];
    for (i = 0; i < j; i++) printf("%d ", second_arr[i]);
    return 0;
}