// Сколько различных трехзначных чисел можно получить из заданного натурального N,
// вычеркивая цифры из его десятичной записи?

#include <stdio.h>
#include <string.h>

int factorial(int n){
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main(void){
    char n[5];
    gets(n);
    int count_digits[strlen(n)];
    for (size_t i = 0; i < strlen(n); i++) count_digits[i] = 1;
    for (size_t i = 0; i < strlen(n); i++) printf("%d ", count_digits[i]);
    printf("\n");
    for (size_t i = 0; i < strlen(n); i++)
        for (size_t j = i + 1; j < strlen(n); j++)
            if (n[i] == n[j] && count_digits[j] != 0) { count_digits[i]++; count_digits[j]--; }
    for (size_t i = 0; i < strlen(n); i++) printf("%d ", count_digits[i]);
    printf("\n");
    
    // P = n! / (n_1! n_2! ... n_k!)
    
    int res_1 = factorial(strlen(n)), res_2 = 1;
    printf("%d\n", res_1);
    
    for (size_t i = 0; i < strlen(n); i++){
        res_2 *= factorial(count_digits[i]);
        printf("* %d! = %d\n", count_digits[i], res_2);
    }

    printf("%d", res_1 / res_2);
    return 0;
}