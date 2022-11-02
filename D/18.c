// Написать рекурсивную функцию и используя ее решить задачу. Напечатать цифры введенного
// натурального числа в порядке следования(слева направо) через пробел.

// цифры в порядке возрастания!!!

// #include <stdio.h>

// void print_digits(int n){
//     if (n / 10 != 0) print_digits(n / 10);
//     printf("%d ", n % 10);
// }

// int main(void){
//     int n;
//     scanf("%d", &n);
//     print_digits(n);
//     return 0;
// }

#include <stdio.h>

int print_digits(int n, int min, int old_min){
    if ((n % 10 < min) && (n % 10 > old_min)) min = n % 10;
    if (n / 10 != 0) print_digits(n / 10, min, old_min);
    else return min;
}

int main(void){
    int n, a, tmp = -1, sum_check = 0, sum = 0;
    scanf("%d", &n);
    a = n;
    do {
        sum_check += a % 10;
        a /= 10;
    } while (a != 0);
    while (sum_check > sum) {
        tmp = print_digits(n, __INT_MAX__, tmp);
        printf("%d ", tmp);
        sum += tmp;
    }
    return 0;
}