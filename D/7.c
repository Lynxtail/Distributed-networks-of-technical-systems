// Составить рекурсивную функцию, печать всех чисел от N до 1
#include <stdio.h>

void print_nums(int n){
    printf("%d ", n);
    if (n > 1) print_nums(n - 1);
}

int main(void){
    int n;
    scanf("%d", &n);
    print_nums(n);
    return 0;
}