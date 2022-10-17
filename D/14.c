// Дана последовательность целых чисел через пробел, завершающаяся числом 0. Выведите все
// нечетные числа из этой последовательности, сохраняя их порядок.
#include <stdio.h>

void print_nums(int tmp){
    scanf("%d", &tmp);
    if (tmp == 0) return;
    if (tmp % 2 != 0) printf("%d ", tmp);
    print_nums(tmp);
}

int main(void){
    int tmp;
    print_nums(tmp);
    return 0;
}