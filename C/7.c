// Составить функцию, которая переводит число N из десятичной системы счисления в P-ичную
// систему счисления

#include <stdio.h>

void pinarisation(int n, int p){
    if (n / p != 0) pinarisation(n / p, p);
    putchar('0' + (n % p));
}

int main(void){
    int n, p;
    scanf("%d %d", &n, &p);
    pinarisation(n, p);
    return 0;
}