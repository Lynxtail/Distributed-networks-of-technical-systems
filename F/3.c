// Написать функцию и программу демонстрирующую работу данной функции. Вывести в 
// порядке возрастания цифры, входящие в десятичную запись натурального числа N, не более 
// 1000 цифр. Цифра пробел сколько раз данная цифра встречается в числе.

#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort_array(int size, int a[], int cnt[]){
    _Bool is_sorted;
    do {
        is_sorted = 1;
        for(int i = 0; i < size - 1; i++){
            if(a[i] > a[i + 1]){
                swap(&a[i], &a[i + 1]);
                swap(&cnt[i], &cnt[i + 1]);
                is_sorted = 0;
            }
        }
    } while(is_sorted != 1);
    for (int i = 0; i < size; i++) printf("%d - %d\n", a[i], cnt[i]);
}

void digits(int a, int *size, int *arr_val, int *arr_cnt){
    int i = 0, l = 0, tmp = a, cnt = 0;
    _Bool is_exist;
    do {
        is_exist = 0;
        for (int j = 0; j < cnt; j++)
            if (tmp % 10 == *(arr_val + j)) {
                is_exist = 1;
                *(arr_cnt + j) += 1;
                break;
            }
        if (is_exist != 1) {    
            *(arr_val + i++) = tmp % 10;
            cnt++;
        }
        tmp /= 10;
    } while (tmp != 0);
    *size = cnt;
}

int main(void)
{
    int n, size_p;
    int digit_p[1000], cnt_digit[1000];
    for (int i = 0; i < 1000; i++) digit_p[i] = 10;
    for (int i = 0; i < 1000; i++) cnt_digit[i] = 1;
    scanf("%d", &n);
    digits(n, &size_p, digit_p, cnt_digit);
    // printf("%d ", size_p);
    // for (int i = 0; i < size_p; i++) printf("%d ", digit_p[i]);
    sort_array(size_p, digit_p, cnt_digit);
    return 0;
}