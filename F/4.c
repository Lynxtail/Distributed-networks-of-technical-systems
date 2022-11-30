// Написать только одну функцию. Всю программу отправлять не надо. Вывести в порядке
// возрастания цифры, входящие в строку. Цифра - количество.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void print_digit(char s[]){
    int arr[100], cnt_arr[100];
    int i = 0, cnt = 0;
    _Bool is_exist;
    for (int j = 0; j < 100; j++) cnt_arr[j] = 1;
    while (s[i] != '\0'){
        is_exist = 0;
        if ('0' <= s[i] && s[i] <= '9'){
            for (int j = 0; j < cnt; j++)
                if (((int) s[i] - 48) == arr[j]){
                    is_exist = 1;
                    cnt_arr[j] += 1;
                    break;
                }
            if (is_exist != 1) {
                arr[cnt] = (int) s[i] - 48;
                ++cnt;
            }
        }
        ++i;
    }
    // for (int i = 0; i <= cnt; i++) printf("%d ", arr[i]);
    sort_array(cnt, arr, cnt_arr);
}

int main(void){
    char str[100];
    gets(str);
    print_digit(str);
    return 0;
}