// Считать массив из 10 элементов и отсортировать первую половину по возрастанию, а вторую –
// по убыванию
#include <stdio.h>

int choose_base_up(int arr[], int l, int r) {
    int tmp, x = arr[r], less = l;

    for (int i = l; i < r; ++i)
        if (arr[i] <= x) {
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

int choose_base_down(int arr[], int l, int r) {
    int tmp, x = arr[r], less = l;

    for (int i = l; i < r; ++i)
        if (arr[i] >= x) {
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

void quick_sort_up(int arr[], int l, int r) {
  if (l < r) {
    int q = choose_base_up(arr, l, r);
    quick_sort_up(arr, l, q - 1);
    quick_sort_up(arr, q + 1, r);
  }
}

void quick_sort_down(int arr[], int l, int r) {
  if (l < r) {
    int q = choose_base_down(arr, l, r);
    quick_sort_down(arr, l, q - 1);
    quick_sort_down(arr, q + 1, r);
  }
}

int main(void){
    int i, n = 10;
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    quick_sort_up(arr, 0, n / 2 - 1);
    quick_sort_down(arr, n / 2, n - 1);
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}