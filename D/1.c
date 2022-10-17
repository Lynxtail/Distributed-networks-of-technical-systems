// Составить рекурсивную функцию, печать всех чисел от 1 до N
#include <stdio.h>

void print_nums(int n){
    if (n > 1) print_nums(n - 1);
    printf("%d ", n);
}

int main(void){
    int n;
    scanf("%d", &n);
    print_nums(n);
    return 0;
}