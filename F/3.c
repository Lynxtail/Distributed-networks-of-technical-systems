// Написать функцию и программу демонстрирующую работу данной функции. Вывести в 
// порядке возрастания цифры, входящие в десятичную запись натурального числа N, не более 
// 1000 цифр. Цифра пробел сколько раз данная цифра встречается в числе.

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
    for (int i = 0; i < size; i++) printf("%d ", a[i]);
}

void digits(int a, int *size, int *arr){
    int i, tmp = a, cnt = 0;
    do {
        tmp /= 10;
        cnt++;
    } while (tmp != 0);
    tmp = a;
    do {
        *(arr + i) = tmp % 10;
        tmp /= 10;
        cnt++;
    } while (tmp != 0);
    *size = cnt;
}

int main(void)
{
    int n, size_p, digit_p;
    scanf("%d", &n);
    digits(n, &size_p, &digit_p);
    printf("%d ", size_p);
    // for (int i = 0; i < size_p; i++) printf("%d ", *(&digit_p + i));
    // sort_array(digits(n)[0], digits(n)[1]);
    return 0;
}