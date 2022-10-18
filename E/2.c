// Ввести c клавиатуры массив из 5 элементов, найти минимальный из них
#include <stdio.h>

int main(void){
    int arr[5], min = __INT_MAX__;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        if (min > arr[i]) min = arr[i];
    }
    printf("%d", min);
    return 0;
}