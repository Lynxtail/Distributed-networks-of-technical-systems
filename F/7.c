// Написать функцию, которая сжимает серии массива, состоящего из единиц и нулей по 
// следующему принципу: например, массив [0,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1] преобразуется в 
// [4,7,2,4] (т.к. начинается с нуля, то сразу записывается количество элементов первой серии); а 
// массив [1,1,1,0,0,0,0,0,0,0] преобразуется в [0,3,7] (т.к. первая серия - это единицы, то первый 
// элемент преобразованного массива 0).

#include <stdio.h>
#include <stdlib.h>

int compression(int a[], int b[], int n){
    int count_0 = 0, count_1 = 0, j = 0;

    if(a[0] == 1) {
        b[0] = 0;
        // count_1++;
        j++;
    }
    for(int i = 0; i < n; i++) 
        if (a[i] == 0) {
            count_0++;
            if (count_1 != 0) {
                b[j] = count_1;
                count_1 = 0;
                j++;
            } 
        } else {
            count_1++;
            if (count_0 != 0) {
                b[j] = count_0;
                count_0 = 0;
                j++;
            }
        }
    if (count_0 != 0) b[j] = count_0;
    if (count_1 != 0) b[j] = count_1;
    for(int i = 0; i <= j; i++) printf("%d ", b[i]);
    return 0;
}

int main(void){
    int n = 5;
    int arr[n], zip_arr[n], ans_arr[n];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        cnt++;
    }
    compression(arr, zip_arr, cnt);
    return 0;
}