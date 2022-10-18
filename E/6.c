// Считать массив из 12 элементов и посчитать среднее арифметическое элементов массива

#include <stdio.h>

int main(void){
    int arr[12], sum = 0;
    for (int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%.2f", sum / 12.0);
    return 0;
}