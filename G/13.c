// В файле input.txt записан полный адрес файла (возможно, без расширения). Необходимо
// изменить его расширение на ".html" и записать результат в файл output.txt

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

    f = fopen("output.txt", "w");
    int i = strlen(str) - 1;
    while (str[i] != '/') {
        if (str[i] == '.') 
            for (int j = strlen(str) - 1; j >= i; j--) str[j] = NULL;
        i++;
    }
    strcat(str, ".html");
    fprintf(f, "%s", str);
    fclose(f);
    return 0;
}