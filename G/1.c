// В файле input.txt дана строка. Вывести ее в файл output.txt три раза через запятую и показать
// количество символов в ней

#include <stdio.h>

int main(void){
    FILE *f;
    char str[100];
    int i;
    for (i = 0; i < 100; i++) str[i] = NULL;
    f = fopen("input.txt", "r");
    fgets(str, 100, f);
    fclose(f);
    i = 0;
    f = fopen("output.txt", "w");
    fprintf(f, "%s, %s, %s %d", str, str, str, i);
    fclose(f);
    return 0;
}