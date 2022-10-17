// Составить функцию, которая вычисляет синус как сумму ряда (с точностью 0.001)
// cos(x) = 1 - x2/2! + x4/4! - x6/6! + ... (x в радианах)

#include <stdio.h>
#include <math.h>

int factorial(int n){
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

float cosinus(float x){
    x *= M_PI / 180;
    float sum = x, tmp = x, eps = .001;
    for (int i = 0; fabs(tmp) > eps; i++){
        tmp *= - x * x / ((2 * i + 2) * (2 * i + 1));
        sum += tmp;
    }
    return sum;
}

int main(void){
    int x;
    scanf("%d", &x);
    printf("%.3f", cosinus(x));
    return 0;
}