// Описать функцию вычисления f(x) по формуле: 
// f(x)= x*x при -2 ≤ x < 2;
// x*x+4x+5 при x ≥ 2;
// 4 при x < -2.
// Используя эту функцию для n заданных чисел, вычислить f(x). Среди вычисленных значений
// найти наибольшее.

#include <stdio.h>

int f(int x){
    int res;
    if (-2 <= x < 2) res = x*x;
    else {
        if (x >= 2) res = x*x + 4*x + 5;
        else res = 4;
    }
    return res;
}

int main(void){
    int res;
    char str;
    while((str = getchar()) != '0'){
        if (str >= '0' && str <= '9'){
            res = f((int) str);
        }
    }
    
    int a;
    scanf("%d %d", &a, &b);
    printf("%d", middle(a, b));
    return 0;
}