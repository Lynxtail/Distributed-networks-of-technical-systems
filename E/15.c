// Считать 10 чисел в диапазоне от -500 до 500 и разложить по двум массивам: в одни помещать
// только положительные, во второй - только отрицательные. Числа, равные нулю,
// игнорировать. Вывести на экран все элементы обоих массивов

#include <stdio.h>

int main(void){
    int tmp, i, j = 0, l = 0, n = 10;
    int first_array[n], second_array[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &tmp);
        if (tmp > 0) first_array[j++] = tmp;
        if (tmp < 0) second_array[l++] = tmp;
    }
    for (i = 0; i < j; i++) printf("%d ", first_array[i]);
    for (i = 0; i < l; i++) printf("%d ", second_array[i]);
    return 0;
}