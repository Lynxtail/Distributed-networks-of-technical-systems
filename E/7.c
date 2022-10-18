// Считать массив из 10 элементов и выполнить инверсию отдельно для 1-ой и 2-ой половин
// массива. Необходимо изменить считанный массив и напечатать его одним циклом

#include <stdio.h>

int main(void){
    int n = 10;
    int arr[n], tmp, i;
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (i = 0; i < (n / 2) / 2; i++){
        tmp = arr[i];
        arr[i] = arr[n / 2 - 1 - i];
        arr[n / 2 - 1 - i] = tmp;
    } 
    for (i = n / 2; i < (n + n / 2) / 2; i++){
        tmp = arr[i];
        arr[i] = arr[n - 1 - i % (n / 2)];
        arr[n - 1 - i % (n / 2)] = tmp;
    } 
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}