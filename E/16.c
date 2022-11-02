// Дан массив из 10 элементов. Определить, какое число в массиве встречается чаще всего.
// Гарантируется, что такое число ровно 1

#include <stdio.h>

int main(void){
    int tmp, i, j = 0, l = 0, n = 10;
    int value_array[n], count_array[n];
    for (i = 0; i < n; i++) scanf("%d", &value_array[i]);
    for (i = 0; i < n; i++) count_array[i] = 1;
    for (i = 0; i < n; i++) 
        for (int j = i + 1; j < n; j++)
            if (value_array[i] == value_array[j]) {
                count_array[i]--;
                count_array[j]++;
            }
    for (i = 0; i < n; i++) printf("%d ", count_array[i]);
    int max = 0;
    for (i = 0; i < n; i++) if (count_array[i] > max) max = i;
    printf("\n%d", max);    
    printf("\n%d", value_array[i]);
    return 0;
}