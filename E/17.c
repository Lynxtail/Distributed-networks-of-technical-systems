// Дан массив из 10 элементов. В массиве найти элементы, которые в нем встречаются только
// один раз, и вывести их на экран.


#include <stdio.h>

int main(void){
    int tmp, i, l = 0, n = 10;
    int value_array[n], count_array[n];
    for (i = 0; i < n; i++) scanf("%d", &value_array[i]);
    for (i = 0; i < n; i++) count_array[i] = 1;
    for (i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (value_array[i] == value_array[j]) {
                count_array[i]++;
                count_array[j]++;
            }
    int max = 0, max_ind = 0;
    // for (i = 0; i < n; i++) printf("%d", count_array[i]);
    for (i = 0; i < n; i++) if (count_array[i] == 1) printf("%d ", value_array[i]);
    return 0;
}