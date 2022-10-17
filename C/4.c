// Описать функцию вычисления f(x) по формуле:
// f(x)= x*x при -2 ≤ x < 2;
// x*x+4x+5 при x ≥ 2;
// 4 при x < -2.
// Используя эту функцию для n заданных чисел, вычислить f(x). Среди вычисленных значений
// найти наибольшее.

#include <stdio.h>

int f(int x){
    int res;
    if (-2 <= x && x < 2) res = x*x;
    else {
        if (x >= 2) res = x*x + 4*x + 5;
        else res = 4;
    }
    return res;
}

int main(void){
    int tmp, res = 0;

    do {
        scanf("%d", &tmp);
        if (tmp == 0) break;
        printf("x = %d; f(x) = %d\n", tmp, f(tmp));
        if (f(tmp) > res) res = f(tmp);
    } while (tmp != 0);

    printf("Maximum: %d", res);
    return 0;
}