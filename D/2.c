// Составить рекурсивную функцию, которая определяет сумму всех чисел от 1 до N
#include <stdio.h>

int sum_nums(int n, int sum){
    sum += n;
    if (n > 0) return sum_nums(n - 1, sum);
    else return sum;
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", sum_nums(n, 0));
    return 0;
}