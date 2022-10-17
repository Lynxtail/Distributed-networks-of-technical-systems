// Составить рекурсивную функцию, печать всех простых множителей числа.

#include <stdio.h>
#include <math.h>

void print_simple(int n, int i){
    if (n % i == 0) {
        printf("%d ", i);
        print_simple(n / i, i); 
    }
    else if (i++ < sqrt(n)) print_simple(n, i);
    else if (n != 1) printf("%d ", n);
}

int main(void){
    int n;
    scanf("%d", &n);
    print_simple(n, 2);
    return 0;
}