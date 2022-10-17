// Составить функцию логическую функцию, которая определяет, верно ли, что в заданном числе
// все цифры стоят по возрастанию. Используя данную функцию решить задачу

#include <stdio.h>

int grow_up(int n){
    int tmp = 10;
    do {
        if (n % 10 < tmp){
            tmp = n % 10;
            n /= 10;
        }
        else return 0;
    } while (n != 0);
    return 1;
}

int main(void){
    int n;
    scanf("%d", &n);
    if (grow_up(n) == 1) printf("YES");
    else printf("NO");
    return 0;
}