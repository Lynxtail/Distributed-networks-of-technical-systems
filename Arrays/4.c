// Написать функцию реверса массива. Первый элемент становится последним, второй элемент предпоследним и т.д.  
#include <stdio.h>

void revers(float arr[], int size){
    float arr_ans[5];
    for (size_t i = 0; i < size; i++) arr_ans[i] = arr[size - 1 - i];
    for (size_t i = 0; i < size; i++) printf("%.1f ", arr_ans[i]);
}

int main(void){
    float array[5] = {7.4, 2.1, 3.1, 13, 1.6};
    revers(array, sizeof(array) / sizeof(array[0]));
    return 0;
}