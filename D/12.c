// Дана монотонная последовательность, в которой каждое натуральное число k встречается
// ровно k раз: 1, 2, 2, 3, 3, 3, 4, 4, 4, 4,… Выведите первые n членов этой последовательности.
// Только один цикл for
#include <stdio.h>

void print_series(int n, int a){
    for (int i = 0; i < a; i++){ 
        printf("%d ", a);
        if (--n == 0) break;;
    }
    if (n > 0) print_series(n, ++a);
}

int main(void){
    int n;
    scanf("%d", &n);
    print_series(n, 1);
    return 0;
}