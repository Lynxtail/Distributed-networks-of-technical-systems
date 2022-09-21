// Ввести натурально число и напечатать все числа от 10 до введенного числа - у которых сумма
// цифр равна произведению цифр


#include <stdio.h>

int main(void){
    int a, i, tmp, sum, prod;
    scanf("%d", &a);

    for (i = 10; i < a; i++){
        tmp = i;
        sum = 0;
        prod = 1;
        do {
            sum += tmp % 10;
            prod *= tmp % 10;
            tmp /= 10;
        } while (tmp != 0);
        if (sum == prod) printf("%d ", i);
    }
    return 0;
}