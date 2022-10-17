// Дана последовательность ненулевых целых чисел, завершающаяся числом 0. Ноль в
// последовательность не входит. Определите наибольшее значение числа в этой
// последовательности. 
#include <stdio.h>

int max_find(int tmp, int max){
    scanf("%d", &tmp);
    if (tmp == 0) return max;
    if (tmp > max) max = tmp;
    max_find(tmp, max);
}

int main(void){
    int tmp;
    printf("%d", max_find(tmp, 0));
    return 0;
}