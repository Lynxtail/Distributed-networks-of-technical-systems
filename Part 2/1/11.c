// Необходимо реализовать только одну функцию, которой на входе передаётся вещественное
// число в типе float, она возвращает порядок который хранится в поле EXP в виде десятичного
// целого числа.

#include <stdio.h>

typedef union {
        float f;
        struct {
            unsigned int mantisa : 23;
            unsigned int exp : 8;
            unsigned int sigh : 1;
        } parts;
    } float_cast;

int extractExp(float n){
    float_cast ans = { .f = n};
    return ans.parts.exp;
}

int main(void){
    float n;
    scanf("%f", &n);
    printf("%d\n", extractExp(n));
    return 0;
}
