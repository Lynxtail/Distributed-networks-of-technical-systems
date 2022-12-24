// На вход программе подается беззнаковое 32-битное целое число N. Требуется изменить
// значения всех битов старшего байта числа на противоположные и вывести полученное таким
// образом число.

#include <stdio.h>
#include <stdint.h>
#include <math.h>

void binarisation(uint32_t n){
    if (n / 2 != 0) binarisation(n / 2);
    putchar('0' + (n % 2));
}

int main(void){
    uint32_t n;
    scanf("%d", &n);
    binarisation(n); printf(" %zu\n", n);

    for (size_t i = 24; i < 32; i++){
        n ^= (1 << i);
        binarisation(n); printf(" %zu\n", n);
        }

    printf("%zu", n);
    return 0;
}