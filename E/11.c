// Считать массив из 10 элементов и отсортировать его по последней цифре
#include <stdio.h>

int choose_base(int arr[], int l, int r) {
    int tmp, x = arr[r], less = l;

    for (int i = l; i < r; ++i)
        if (arr[i] % 10 <= x % 10) {
            tmp = arr[less];
            arr[less] = arr[i];
            arr[i] = tmp;
            ++less;
        }
    tmp = arr[less];
    arr[less] = arr[r];
    arr[r] = tmp;
    return less;
}

void quick_sort(int arr[], int l, int r) {
  if (l < r) {
    int q = choose_base(arr, l, r);
    quick_sort(arr, l, q - 1);
    quick_sort(arr, q + 1, r);
  }
}

int main(void){
    int i, n = 10;
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    quick_sort(arr, 0, n - 1);
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}