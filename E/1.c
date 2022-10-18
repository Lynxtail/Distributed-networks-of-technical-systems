// Ввести c клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов
// массива.

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int arr[5], sum = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%.3f", sum / 5.0);
    return 0;
}