// На вход программе подается беззнаковое 32-битное целое число N. Требуется изменить
// значения всех битов старшего байта числа на противоположные и вывести полученное таким
// образом число.

#include <stdio.h>
#include <math.h>

void binarisation(int n){
    if (n / 2 != 0) binarisation(n / 2);
    putchar('0' + (n % 2));
}

int main(void){
    unsigned int n;
    scanf("%d", &n);
    binarisation(n); printf(" %d\n", n);
    unsigned int mask = ~n; 
    binarisation(mask); printf(" %d\n", mask);
    mask += 255 << 8 * 3;  
    binarisation(mask); printf(" %d\n", mask);

    printf("%d", n ^ mask);
    return 0;
}