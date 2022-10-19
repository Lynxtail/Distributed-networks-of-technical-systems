// Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4.
#include <stdio.h>

int main(void){
    int i, n = 12, k = 4;
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int j = 0; j < k; j++) {
        int tmp = arr[n - 1];
        for (i = n; i > 0; i--) arr[i] = arr[i - 1];
        arr[0] = tmp;
    }
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}