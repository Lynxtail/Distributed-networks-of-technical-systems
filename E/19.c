// Вывести в порядке следования цифры, входящие в десятичную запись натурального числа N. 

#include <stdio.h>

int choose_base(int arr[], int l, int r) {
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

void quick_sort(int arr[], int l, int r) {
  if (l < r) {
    int q = choose_base(arr, l, r);
    quick_sort(arr, l, q - 1);
    quick_sort(arr, q + 1, r);
  }
}

int main(void){
    int n, i = 0;
    char tmp;
    int digits[20];
    scanf("%d", &n);
    do {
        digits[i] = n % 10;
        n /= 10;
        i++;
    } while (n != 0);
    quick_sort(digits, 0, i - 1);
    for (int j = 0; j < i; j++) printf("%d ", digits[j]);
    return 0;
}