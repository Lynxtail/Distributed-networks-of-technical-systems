// Считать массив из 10 элементов и выполнить циклический сдвиг ВПРАВО на 1.
#include <stdio.h>

int main(void){
    int i, n = 10, k = 1;
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    int tmp = arr[n - 1];
    for (i = n; i > 0; i--) arr[i] = arr[i - 1];
    arr[0] = tmp;
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}