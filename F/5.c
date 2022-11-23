// Написать только одну функцию, которая находит максимальный элемент в массиве. Всю 
// программу загружать не надо.

#include <stdio.h>

int find_max_array(int size, int a[]){
    int max = 0;
    for (int i = 0; i < size; i++)
        if (max < a[i]) max = a[i];
    return max;
}

int main(void){
    int arr[100];
    int i;
    for (i = 0; i < 100; i++) scanf("%d ", &arr[i]);
    printf("\n%d", find_max_array(i, arr));
    return 0;
}