// В файле input.txt строка из меленьких и больших английских букв, знаков препинания и
// пробелов. Требуется удалить из нее повторяющиеся символы и все пробелы. Результат
// записать в файл output.txt.

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE *f;
    char tmp, str[1000];
    for (int i = 0; i < 1000; i++) str[i] = NULL;
    
    f = fopen("input.txt", "r");
    fgets(str, 1000, f);
    fclose(f);

    for (int i = 0; i < strlen(str); i++)
        for (int j = i + 1; j < strlen(str); j++)
            if (str[i] == str[j] || str[j] == ' ') {
                for (int l = j; l < strlen(str) - 1; l++)
                    str[l] = str[l + 1];
                str[strlen(str) - 1] = NULL;
            }

    f = fopen("output.txt", "w");
    fprintf(f, "%s ", str);
    fclose(f);
    return 0;
}