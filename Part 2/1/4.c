// На вход программе подается беззнаковое 32-битное целое число N и натуральное число K (1 ≤
// K ≤ 31). Требуется взять K младших битов числа N и вывести полученное таким образом число

#include <stdio.h>
#include <math.h>

int main(void){
    unsigned int n, k;
    scanf("%d %d", &n, &k);
    unsigned int mask = pow(2, k) - 1;
    n &= mask;
    printf("%d", n);
    return 0;
}