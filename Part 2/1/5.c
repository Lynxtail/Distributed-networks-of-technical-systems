// На вход программе подается беззнаковое 32-битное целое число N и натуральное число K (1 ≤
// K ≤ 31). Требуется взять K подряд идущих битов числа N так, чтобы полученное число было
// максимальным. Программа должна вывести полученное число.

#include <stdio.h>
#include <math.h>

void binarisation(int n){
    if (n / 2 != 0) binarisation(n / 2);
    putchar('0' + (n % 2));
}

int main(void){
    unsigned int n, k;
    scanf("%d %d", &n, &k);
    binarisation(n); printf("\n");
    unsigned int mask = pow(2, k) - 1;
    binarisation(mask); printf("\n");

    int max = n & mask, tmp = n;
    
    while (n){
        n = n >> 1;
        tmp = n & mask;
        // binarisation(tmp);
        // printf("\n");
        if (tmp > max) max = tmp;
    }
    binarisation(max);
    printf("\n");
    printf("%d", max);
    return 0;
}