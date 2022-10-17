// Написать рекурсивную функцию и используя ее решить задачу. Напечатать цифры введенного
// натурального числа в порядке следования(слева направо) через пробел.
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