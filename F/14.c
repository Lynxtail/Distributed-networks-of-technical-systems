// Составить функцию которая возвращает сумму элементов, значение которых находится в
// заданном отрезке [from, to] для массива

#include <stdio.h>

int sum_between_ab(int from, int to, int size, int a[]){
    int sum = 0;
    for (int i = 0; i < size; i++)
        if (from <= a[i] && a[i] <= to)
            sum += a[i];
    return sum;
}

int main(void){
    int n = 10;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int from, to;
    scanf("%d %d", &from, &to);
    printf("%d", sum_between_ab(from, to, n, arr));
    return 0;
}