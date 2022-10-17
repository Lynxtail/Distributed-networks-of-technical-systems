#include <stdio.h>
// #include "second.c"

extern int max3(int, int, int);

int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d!!!", max3(a, b, c));
}