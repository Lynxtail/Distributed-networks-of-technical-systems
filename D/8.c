// Составить рекурсивную функцию, Выведите все числа от A до B включительно, в порядке
// возрастания, если A < B, или в порядке убывания в противном случае.
#include <stdio.h>

void print_nums(int a, int b){
    if (a == b) {
        printf("%d", a);
        return;
    }
    else {
        if (a > b) printf("%d ", a--);
        else printf("%d ", a++);
        print_nums(a, b);
    }
}

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    print_nums(a, b);
    return 0;
}