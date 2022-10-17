// Написать логическую рекурсивную функцию и используя ее определить является ли
// введенное натуральное число точной степенью двойки.

#include <stdio.h>
#include <math.h>

int is_two_pow(int n){
    if (n % 2 == 0) is_two_pow(n / 2);
    else return 0;
    return 1;
}

int main(void){
    int n;
    scanf("%d", &n);
    (is_two_pow(n) == 1) ? printf("YES") : printf("NO");
    return 0;
}