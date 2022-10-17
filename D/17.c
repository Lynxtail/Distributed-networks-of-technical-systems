// Функция Аккермана определяется рекурсивно для неотрицательных целых чисел m и n
// следующим образом:
// n + 1, m = 0
// A(m - 1, 1), m > 0, n = 0
// A(m - 1, A(m, n - 1)), m > 0, n > 0

#include <stdio.h>

int akkerman(int m, int n){
    if (m == 0) return n + 1;
    else if (m > 0 && n == 0) akkerman(m - 1, 1);
    else akkerman(m - 1, akkerman(m, n - 1));
}

int main(void){
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d", akkerman(m, n));
    return 0;
}
