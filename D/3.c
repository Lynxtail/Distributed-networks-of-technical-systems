// Дано целое не отрицательное число N. Выведите все его цифры по одной, в обратном порядке,
// разделяя их пробелами или новыми строками
#include <stdio.h>

void reverse_digits(int n){
    printf("%d ", n % 10);
    if (n / 10 != 0) reverse_digits(n / 10);
}

int main(void){
    int n;
    scanf("%d", &n);
    reverse_digits(n);
    return 0;
}