// Вывести на экран ряд чисел Фибоначчи, состоящий из n элементов.
// Числа Фибоначчи – это элементы числовой последовательности 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,
// 144, …, в которой каждое последующее число равно сумме двух предыдущих.


#include <stdio.h>

int main(void){
    int n, a, b, c, i;
    scanf("%d", &n);
    a = 0;
    b = 1;
    for (i = 0; i < n; i++){
        printf("%d ", b);
        c = b;
        b += a;
        a = c;
    }
    return 0;
}