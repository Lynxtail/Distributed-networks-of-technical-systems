// Считать массив из 10 элементов и найти в нем два максимальных элемента с разными
// индексами(значения могут совпадать) и напечатать их сумму.
#include <stdio.h>

int main(void){
    int arr[10];
    int first_max = -__INT_MAX__, second_max = -__INT_MAX__;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (first_max < arr[i]) first_max = arr[i];
    }
    for (int i = 0; i < 10; i++) 
        if (second_max < arr[i] && arr[i] != first_max) second_max = arr[i];
    printf("%d", first_max + second_max);
    return 0;
}