// Составить функцию которая возвращает количество элементов на заданном отрезке [from, to]
// для массива. Количество элементов, значение которых лежит в заданном интервале. Прототип
// функции

#include <stdio.h>

int count_between(int from, int to, int size, int a[]){
    int count = 0;
    for (int i = 0; i < size; i++)
        if (from <= a[i] && a[i] <= to)
            ++count;
    return count;
}

int main(void){
    int n = 10;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int from, to;
    scanf("%d %d", &from, &to);
    printf("%d", count_between(from, to, n, arr));
    return 0;
}