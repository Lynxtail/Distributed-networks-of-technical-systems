// Составить только функцию которая в массиве находит максимальный из отрицательных
// элементов и меняет его местами с последним элементом массива. Гарантируется, что в
// массиве только один такой элемент или же такой элемент отсутствует. Если отрицательных
// элементов нет - массив не менять

#include <stdio.h>

void swap_negmax_last(int size, int a[])
{
    int max = -__INT_MAX__;
    int k = 0;
    for(int i = 0; i < size; ++i)
        if (a[i] < 0 && a[i] > max) {
            max = a[i];
            k = i;
        }
    a[size - 1] ^= a[k];
    a[k] ^= a[size - 1];
    a[size - 1] ^= a[k];
    for (int i = 0; i < size; i++) printf("%d ", a[i]);
}

int main()
{
    int n = 10;
    int array[10] = {1, -2, -3, -4, 5, 6, 7, 8, 9, 10};
    // for (int i = 0; i < n; i++) scanf("%d", &array[i]);
    swap_negmax_last(n, array);
    return 0;
}