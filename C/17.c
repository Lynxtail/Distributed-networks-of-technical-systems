// Составить логическую функцию, которая определяет, верно ли, что в заданном числе сумма
// цифр равна произведению.

#include <stdio.h>

int is_happy_number(int n){
    int sum = 0, prod = 1;
    do {
        sum += n % 10;
        prod *= n % 10;
        n /= 10;
    } while (n != 0);
    if (sum == prod) return 1;
    return 0;
}

int main(void){
    int n;
    scanf("%d", &n);
    (is_happy_number(n) == 1) ? printf("YES") : printf("NO");
    return 0;
}