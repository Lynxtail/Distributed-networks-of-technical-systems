// Написать функцию сдвига массива на 1 элемент влево. 

#include <stdio.h>

void shift(int size, float arr[]){
    float tmp = arr[0];
    for (size_t i = 0; i < size - 1; i++) arr[i] = arr[i + 1];
    arr[size - 1] = tmp;
}

int main(void){
    float array[5] = {7.4, 2.1, 3.1, 13, 1.6};
    shift(sizeof(array) / sizeof(array[0]), array);
    for (size_t i = 0; i < sizeof(array) / sizeof(array[0]); i++) printf("%.1f ", array[i]);
    return 0;
}