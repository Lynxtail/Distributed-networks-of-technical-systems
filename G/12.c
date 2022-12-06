// В файле input.txt дано предложение требуется разобрать его на отдельные слова. Напечатать
// каждое слово на отдельной строке в файл output.txt

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
    for (int i = 0; i < strlen(str); i++) 
        if (str[i] != ' ') fprintf(f, "%c", str[i]);
        else fprintf(f, "\n");

    fclose(f);
    return 0;
}