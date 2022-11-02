// Считать массив из 10 элементов и выделить в другой массив все числа, которые встречаются
// более одного раза. В результирующем массиве эти числа не должны повторяться.

#include <stdio.h>

int main(void){
    int i, n = 10;
    int first_arr[n], second_arr[n];
    for (i = 0; i < n; i++) scanf("%d", &first_arr[i]);
    for (i = 0; i < n; i++) second_arr[i] = -__INT_MAX__;
    int j = 0;
    for (i = 0; i < n; i++){
        int flag = 0;
        for (int l = 0; l < n; l++)
            if (first_arr[i] == second_arr[l]) {
                flag = 1;
                break;
            }
        if (flag == 0){
            for (int l = i + 1; l < n; l++)
                if (first_arr[i] == first_arr[l]) {
                    second_arr[j++] = first_arr[i];
                    break;
                }
        }
    }
    for (i = 0; i < j; i++) printf("%d ", second_arr[i]);
    return 0;
}