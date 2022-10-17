// Составить функцию логическую функцию, которая определяет, верно ли, что сумма его цифр –
// четное число. Используя эту функцию решить задачу

#include <stdio.h>

int check_sum(int n){
    int sum = 0;
    do {
        sum += n % 10;
        n /= 10;
    } while (n != 0);
    if (sum % 2 == 0) return 1;
    return 0;
}

int main(void){
    int n;
    scanf("%d", &n);
    if (check_sum(n) == 1) printf("YES");
    else printf("NO");
    return 0;
}