// Считать массив из 10 элементов и посчитать сумму положительных элементов массива
#include <stdio.h>

int main(void){
    int arr[10];
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}