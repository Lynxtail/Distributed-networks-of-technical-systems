// Составить функцию, которая вычисляет синус как сумму ряда (с точностью 0.001)
// sin(x) = x - x3/3! + x5/5! - x7/7! + ...(x в радианах)

#include <stdio.h>
#include <math.h>

int factorial(int n){
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

float sinus(float x){
    x *= M_PI / 180;
    float sum = x, tmp = x, eps = .001;
    for (int i = 0; fabs(tmp) > eps; i++){
        tmp *= - x * x / ((2 * i + 3) * (2 * i + 2));
        sum += tmp;
    }
    return sum;
}

int main(void){
    int x;
    scanf("%d", &x);
    printf("%.3f", sinus(x));
    return 0;
}