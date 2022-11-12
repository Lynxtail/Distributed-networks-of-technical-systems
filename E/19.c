// Вывести в порядке следования цифры, входящие в десятичную запись натурального числа N. 

#include <stdio.h>

int main(void){
    int n;
    // int digits[???]; какая-то размерность
    scanf("%d", &n);
    do {
        // digits[i] = n % 10 ??? или чот вроде того
        n /= 10;
    } while (n != 0);
    // quick sort???
    return 0;
}