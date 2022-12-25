// Написать функцию сдвига массива на N элементов вправо. 

#include <stdio.h>

void shift(int size, int n, float arr[]){
    for (size_t j = 0; j < n; j++){
        float tmp = arr[size - 1];
        for (size_t i = size - 1; i > 0; i--) arr[i] = arr[i - 1];
        arr[0] = tmp;
    }
}

int main(void){
    float array[5] = {7.4, 2.1, 3.1, 13, 1.6};
    int n;
    scanf("%d", &n);
    shift(sizeof(array) / sizeof(array[0]), n, array);
    for (size_t i = 0; i < sizeof(array) / sizeof(array[0]); i++) printf("%.1f ", array[i]);
    return 0;
}