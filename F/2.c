// Написать только одну функцию, которая ставит в начало массива все четные элементы, а в 
// конец – все нечетные. 
#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort_even_odd(int n, int a[]){
    int ind_1 = 0, ind_2 = n / 2;
    for (int i = 0; i < n - 1; i++){
        if(a[i] % 2 == 0){
            swap(&a[ind_1], &a[i]);
            ind_1++;
        } else{
            swap(&a[ind_2], &a[i]);
            ind_2++;
        }
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