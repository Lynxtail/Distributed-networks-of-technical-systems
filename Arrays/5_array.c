//Составить функцию которая определяет в массиве, состоящем из положительных и отрицательных чисел, 
//сколько элементов превосходят по модулю максимальный элемент.
//Показать пример ее работы на массиве из 10 элементов. 

#include <stdio.h>
#include <stdlib.h>

int find_max_array(int size, int a[]){
    int max = -__INT_MAX__, max_ind;
    for (size_t i = 0; i < size; i++)
        if (max < a[i]) { max = a[i]; max_ind = i; }
    return max_ind;
}

int count_max_abs(int n, int a[]){
    int count = 0; int max;
    max = a[find_max_array(n, a)];
    for (size_t i = 0; i < n; i++)
        if (abs(a[i]) > max) count++;
    return count;
}

int main(void){
    int array[10] = {-1, -2, 3, 4, -5, -6, 7, 8, -9, 0};
    printf("%d", count_max_abs(10, array));
    return 0;
}