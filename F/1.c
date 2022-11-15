// Написать только одну функцию, которая сортирует массив по возрастанию. 
#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort_array(int size, int a[]){
    _Bool is_sorted;
    do {
        is_sorted = 1;
        for(int i = 0; i < size - 1; i++){
            if(a[i] > a[i + 1]){
                swap(&a[i], &a[i + 1]);
                is_sorted = 0;
            }
        }
    } while(is_sorted !=1);
}

int main(void)
{
    int arr[20];
    for (int i = 0; i < 20; i++) scanf("%d", &arr[i]);
    sort_array(20, arr);
    for (int i = 0; i < 20; i++) printf("%d ", arr[i]);
    return 0;
}