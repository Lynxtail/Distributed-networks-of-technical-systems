// Считать массив из 12 элементов и выполнить инверсию для каждой трети массива.

#include <stdio.h>

int main(void){
    int n = 12;
    int arr[n], tmp, i;
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (i = 0; i < (n / 3) / 2; i++){
        tmp = arr[i];
        arr[i] = arr[n / 3 - 1 - i];
        arr[n / 3 - 1 - i] = tmp;
    } 
    for (i = n / 3; i < (2 * n / 3 + n / 3) / 2; i++){
        tmp = arr[i];
        arr[i] = arr[2 * n / 3 - 1 - i % (n / 3)];
        arr[2 * n / 3 - 1 - i % (n / 3)] = tmp;
    } 
    for (i = 2 * n / 3; i < (n + 2 * n / 3) / 2; i++){
        tmp = arr[i];
        arr[i] = arr[n - 1 - i % (n / 3)];
        arr[n - 1 - i % (n / 3)] = tmp;
    } 
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}