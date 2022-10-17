// Перевести натуральное число в двоичную систему счисления. Необходимо реализовать
// рекурсивную функцию
#include <stdio.h>

int dec_to_bin(int n, int ans){
    if (n >= 2) ans = dec_to_bin(n / 2, ans) * 10;
    ans += n % 2;
    return ans;
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", dec_to_bin(n, 0));
    return 0;
}