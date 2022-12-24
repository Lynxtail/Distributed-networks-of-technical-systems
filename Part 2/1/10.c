// Необходимо реализовать только одну функцию (всю программу писать не надо!!!), которая
// упаковывает переданный ей массив из 32-ух элементов 0 и 1 в указанную структуру данных.
// Функция должна строго соответствовать прототипу: void array2struct(int [], struct pack_array *)


#include <stdio.h>
#include <stdint.h>
#include <math.h>

struct pack_array {
    uint32_t array; // поле для хранения упакованного массива из 0 и 1
    uint32_t count0 : 8; // счетчик нулей в array
    uint32_t count1 : 8; // счетчик единиц в array
};

void array2struct(int a[], struct pack_array *ans) 
{
    int i = 0, j = 0;
    int count_1 = 0, count_2 = 0;
    while(i < 32) {
       while(a[i] == 0) { ans->count0++; ++i; }

       while(a[i] == 1) { ans->count1++; ans->array += pow(2, i); ++i; }
       
       if (i >= 32) break;
    }
}

int main()
{
    int a[32] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0};
    struct pack_array ans; ans.array = 0; ans.count0 = 0; ans.count1 = 0;
    array2struct(a, &ans); 
    printf("Fields:\narray = %x\ncount 0 = %d\ncount 1 = %d", ans.array, ans.count0, ans.count1);
    return 0;
}
