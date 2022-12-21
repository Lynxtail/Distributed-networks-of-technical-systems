// На стандартном потоке ввода задаётся натуральное число N (N > 0), после которого следует
// последовательность из N целых чисел.
// На стандартный поток вывода напечатайте, сколько раз в этой последовательности
// встречается максимум.

#include <stdio.h>

int main(void){
    int n, tmp, max = -__INT_MAX__, max_count = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &tmp);
        if (tmp > max){ max = tmp; max_count = 1; }
        else if (tmp == max) max_count++;
    }
    printf("%d - %d", max, max_count);
    return 0;
}