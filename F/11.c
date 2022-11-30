// Дан целочисленный массив из 30 элементов. Элементы массива могут принимать
// произвольные целые значения помещающиеся в int. Необходимо создать функцию, которая
// находит и выводит в порядке возрастания номера двух элементов массива, сумма которых
// минимальна. Необходимо напечатать сначала элементы с меньшим индексом, потом с
// большим.

#include <stdio.h>

void find_min_array(int size, int a[]){
    int min = __INT_MAX__, prev_min = __INT_MAX__;
    int ind_1, ind_2;
    for (int i = 0; i < size; i++)
        if (min > a[i] && a[i] != prev_min) {
            min = a[i]; ind_1 = i;
        }
    prev_min = min; min = __INT_MAX__;
    for (int i = 0; i < size; i++)
        if (min > a[i] && a[i] != prev_min) {
            min = a[i];
            ind_2 = i;
        }
    printf("%d %d", ind_1, ind_2);
}

int main(void){
    int n = 30;
    int arr[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    // for (int i = 0; i < n; i++) scanf("%d", &arr);
    find_min_array(n, arr);
    return 0;
}