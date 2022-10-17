// Дано натуральное число N. Посчитать количество «1» в двоичной записи числа
#include <stdio.h>

int dec_to_bin(int n, int cnt){
    if (n % 2 == 1) cnt++;
    if (n >= 2) return dec_to_bin(n / 2, cnt);
    return cnt;
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", dec_to_bin(n, 0));
    return 0;
}