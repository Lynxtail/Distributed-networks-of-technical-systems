// Написать только одну функцию, которая ставит в начало массива все четные элементы, а в 
// конец – все нечетные. 
#include <stdio.h>

void sort_even_odd(int n, int a[]){
    int tmp, first = __INT_MAX__;
    for (int i = 0; i < n; i++){
        if (a[i] % 2 != 0){
            tmp = a[i];
            if (first == __INT_MAX__) first = tmp;
            for (int j = i; j < n - 1; j++) a[j] = a[j + 1];
            a[n - 1] = tmp;
            for (int l = 0; l < 20; l++) printf("%d ", a[l]); 
            printf("\n");       
        }    
        if (a[i] == first) break;
    }
}

int main(void)
{
    int arr[20];
    for (int i = 0; i < 20; i++) scanf("%d", &arr[i]);
    sort_even_odd(20, arr);
    for (int i = 0; i < 20; i++) printf("%d ", arr[i]);
    return 0;
}