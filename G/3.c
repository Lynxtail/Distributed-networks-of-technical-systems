// В файле input.txt дана строка из 1000 символов. Показать номера символов, совпадающих с
// последним символом строки. Результат записать в файл output.txt

#include <stdio.h>

int main(void){
    FILE *f;
    int i;
    char str[1000];
    for (i = 0; i < 1000; i++) str[i] = NULL;
    f = fopen("input.txt", "r");
    fgets(str, 1000, f);
    fclose(f);
    f = fopen("output.txt", "w");
    i = -1;
    while (str[++i] != NULL);
    printf("%d", i);
    for (int j = 0; j < i - 1; j++)
        if (str[j] == str[i - 1]) fprintf(f, "%d ", j);
    fclose(f);
    return 0;
}