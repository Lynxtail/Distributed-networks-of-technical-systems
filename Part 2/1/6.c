// На вход программе подается беззнаковое 32-битное целое число N. Требуется найти
// количество единичных битов в двоичном представлении данного числа.

#include <stdio.h>

int main(void){
    unsigned int n, count = 0;
    scanf("%d", &n);
    while (n != 0){
        if (n % 2 == 1) count++;
        n /= 2;
    }
    printf("%d", count);
    return 0;
}