// Написать функцию вычисления скалярного произведения двух вещественных массивов.  

#include <stdio.h>

void scalar(float a[], float b[]){
    float sum = 0;
    for (int i = 0; i < 10; i++)
        sum += a[i] * b[i];
    printf("%f", sum);
}

int main(void){
    float array_1[5] = {7.4, 2.1, 3.1, 13, 1.6};
    float array_2[5] = {1.9, 6.7, 3.4, 4, 15};
    scalar(array_1, array_2);
    return 0;
}