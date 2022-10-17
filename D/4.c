// Дано натуральное число N. Выведите все его цифры по одной, в прямом порядке, разделяя их
// пробелами или новыми строками. Необходимо реализовать рекурсивную функцию
#include <stdio.h>

void print_digits(int n){
    if (n / 10 != 0) print_digits(n / 10);
    printf("%d ", n % 10);
}

int main(void){
    int n;
    scanf("%d", &n);
    print_digits(n);
    return 0;
}