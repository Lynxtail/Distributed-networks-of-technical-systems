// Написать только одну логическую функцию, которая определяет, верно ли, что среди 
// элементов массива есть два одинаковых. Если ответ «да», функция возвращает 1; если ответ 
// «нет», то 0.

#include <stdio.h>
#include <stdlib.h>

int is_two_same(int size, int a[]){
    int count;
    for (int i = 0; i < size; i++){
        count = 0;
        for (int j = i + 1; j < size; j++)
            if (a[i] == a[j]) count++;
        if (count) return 1;
    }
    return 0;
}
int main(void) {
    int arr[10] = {1, 2, 3, 4, 5, 9, 6, 0, 10, 1};
    printf("%d ", is_two_same(10, arr));
    return 0;
}