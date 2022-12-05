// Составить функцию которая меняет в массиве минимальный и максимальный элемент
// местами. Прототип функции

#include <stdio.h>

int find_max_array(int size, int a[]){
    int max = -__INT_MAX__, max_ind;
    for (int i = 0; i < size; i++)
        if (max < a[i]) {
            max = a[i];
            max_ind = i;
        }
    return max_ind;
}

int find_min_array(int size, int a[]){
    int min = __INT_MAX__, min_ind;
    for (int i = 0; i < size; i++)
        if (min > a[i]) {
            min = a[i];
            min_ind = i;
        }
    return min_ind;
}

void change_max_min(int size, int a[]){
    int max_ind, min_ind;
    max_ind = find_max_array(size, a);
    min_ind = find_min_array(size, a);
    a[max_ind] ^= a[min_ind];
    a[min_ind] ^= a[max_ind];
    a[max_ind] ^= a[min_ind];
    for (int i = 0; i < size; i++) printf("%d ", a[i]);
}

int main(void){
    int n = 10;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for (int i = 0; i < n; i++) scanf("%d", &arr);
    change_max_min(n, arr);
    return 0;
}