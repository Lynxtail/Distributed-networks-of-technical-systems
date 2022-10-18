// Считать массив из 10 элементов и найти в нем максимальный и минимальный элементы и их
// номера.
#include <stdio.h>

int main(void){
    int arr[10];
    int min_ind, max_ind;
    int min = __INT_MAX__, max = -__INT_MAX__;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (min > arr[i]){
            min = arr[i];
            min_ind = i + 1;
        }
        if (max < arr[i]){
            max = arr[i];
            max_ind = i + 1;
        }
    }
    printf("%d %d %d %d", min_ind, min, max_ind, max);
    return 0;
}