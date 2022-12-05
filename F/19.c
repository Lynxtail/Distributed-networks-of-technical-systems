// Определить количество положительных элементов квадратной матрицы, превышающих по
// величине среднее арифметическое всех элементов главной диагонали. Реализовать функцию
// среднее арифметическое главной диагонали.

#include <stdio.h>

int diag_mean(int size, int a[size][size]){
    int sum = 0;
    for (int i = 0; i < size; i++) sum += a[i][i];
    return sum / size;
}

int count_more_diag_mean(int size, int a[size][size]){
    int mean, count = 0;
    mean = diag_mean(size, a);
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            if (a[i][j] > mean) count++;
    return count;
}

int main(void){
    int n = 5;
    int arr[5][5] = {{1, 1, 1, 1, 1},
                     {2, 2, 2, 2, 2},
                     {3, 3, 3, 3, 3},
                     {4, 4, 4, 4, 4},
                     {5, 5, 5, 5, 5}};
    printf("%d", count_more_diag_mean(n, arr));
    return 0;
}