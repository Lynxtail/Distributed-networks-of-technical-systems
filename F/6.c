// Написать только одну логическую функцию, которая определяет, верно ли, что среди 
// элементов массива есть два одинаковых. Если ответ «да», функция возвращает 1; если ответ 
// «нет», то 0.
#include <stdio.h>

int is_two_same(int size, int a[]){
    _Bool flag = 0;
    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size; j++)
            if (a[i] == a[j]) {
                printf("%d - %d\n", a[i], a[j]);
                flag = 1;
                break;
            }
    return flag;
}

int main(void){
    int arr[100];
    int i;
    for (i = 0; i < 100; i++) scanf("%d ", &arr[i]);
    printf("%d", i);
    printf("\n%d", is_two_same(i, arr));
    return 0;
}