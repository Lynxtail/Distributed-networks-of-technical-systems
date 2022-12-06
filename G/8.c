// В файле input.txt дана строка, не более 1000 символов, содержащая буквы, целые числа и иные
// символы. Требуется все числа, которые встречаются в строке, поместить в отдельный
// целочисленный массив. Например, если дана строка "data 48 call 9 read13 blank0a", то в массиве
// числа 48, 9, 13 и 0. Вывести массив по возрастанию в файл output.txt.

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int comp(const int *a, const int *b){
    return *a - *b;
}

int main(void){
    FILE *f;
    char tmp, str[1000];
    for (int i = 0; i < 1000; i++) str[i] = NULL;
    
    f = fopen("input.txt", "r");
    fgets(str, 1000, f);
    fclose(f);

    int num[strlen(str)];
    for (int i = 0; i < strlen(str); i++) num[i] = NULL;
    int k = 0;
    for (int i = 0; i < strlen(str); i++)
        if (isdigit(str[i])) {
            int j = i, tmp_num = 0;
            do {
                tmp_num += (int) str[j++] - 48;
                tmp_num *= 10;
            } while (isdigit(str[j]));
            i = j;
            num[k++] = tmp_num / 10;
        }
    
    qsort(num, k, sizeof(num[0]), comp);

    f = fopen("output.txt", "w");
    for (int i = 0; i < k; i++) fprintf(f, "%d ", num[i]);
    fclose(f);
    return 0;
}