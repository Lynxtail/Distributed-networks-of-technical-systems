// Составить функцию логическую функцию, которая определяет, верно ли, что число простое.
// Используя функцию решить задач

#include <stdio.h>

int is_prime(int n){
    for (int i = 2; i < n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main(void){
    int n;
    scanf("%d", &n);
    (is_prime(n) == 1) ? printf("YES") : printf("NO");
    return 0;
}