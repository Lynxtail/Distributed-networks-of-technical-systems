// В файле input.txt необходимо удалить все лишние пробелы (в начале предложения и
// сдвоенные пробелы). Для решения задачи разработать функцию. Результат записать в
// output.txt

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE *f;
    char str[1000];
    for (int i = 0; i < 1000; i++) str[i] = NULL;
    
    f = fopen("input.txt", "r");
    fgets(str, 1000, f);
    fclose(f);

    _Bool flag = 0;

    for (size_t j = 0; j < strlen(str); j++)
        if (str[j] == ' ') {
            flag = 1;
            size_t i = j;
            while (str[i] == ' ') {
                flag ^= 1;
                if (!flag) {
                    for (size_t l = i; l < strlen(str); l++)
                        str[l] = str[l + 1];
                }
                i++;
            }
        }
    if (str[0] == ' ') 
        for (size_t l = 0; l < strlen(str); l++)
            str[l] = str[l + 1];
    
    f = fopen("output.txt", "w");
    fprintf(f, "%s", str);
    fclose(f);
    return 0;
}