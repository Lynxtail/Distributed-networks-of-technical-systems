// Написать только одну логическую функцию, которая определяет, верно ли, что среди 
// элементов массива есть два одинаковых. Если ответ «да», функция возвращает 1; если ответ 
// «нет», то 0.

#include <stdio.h>
#include <stdlib.h>

int is_two_same(int size, int a[]){
    int tmp, count;
    _Bool flag = 0;
    for (int i = 0; i < size; i++){
        tmp = a[i];
        count = 0;
        for (int j = 0; j < size; j++)
            if (tmp == a[j]){
                count++;
                if (count == 2) flag = 1;
                // flag = 1;
                break;
            }
    }
    return flag;
}
int main(void) {
    int arr[10] = {1, 2, 3, 4, 5, 9, 6, 1};
    printf("%d ", is_two_same(10, arr));
    return 0;
}