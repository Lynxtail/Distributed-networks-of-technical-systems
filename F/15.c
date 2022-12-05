// Составить функцию которая определяет в массиве, состоящем из положительных и
// отрицательных чисел, сколько элементов превосходят по модулю максимальный элемент.

#include <stdio.h>
#include <stdlib.h>

int find_max_array(int size, int a[]){
    int max = -__INT_MAX__, max_ind;
    for (int i = 0; i < size; i++)
        if (max < a[i]) {
            max = a[i];
            max_ind = i;
        }
    return max_ind;
}

int count_bigger_abs(int n, int a[]){
    int count = 0;
    int max;
    max = a[find_max_array(n, a)];
    for (int i = 0; i < n; i++)
        if (abs(a[i]) > max) ++count;
    return count;
}

int main(void){
    int n = 10;
    int arr[10] = {1, -20, 3, 4, -50, 6, 7, 8, 9, 10};
    printf("%d", count_bigger_abs(n, arr));
    return 0;
}