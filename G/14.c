// В файле input.txt в одной строке фамилию, имя и отчество. Сформировать файл приветствие
// output.txt, где останутся имя и фамилия

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE *f;
    char str[100];
    for (int i = 0; i < 100; i++) str[i] = NULL;
    
    f = fopen("input.txt", "r");
    fgets(str, 100, f);
    fclose(f);

    char name[100], surname[100];
    for (int i = 0; i < 100; i++) { name[i] = NULL; surname[i] = NULL; }
    f = fopen("output.txt", "w");
    int i, j = 0;
    for (i = 0; i < strlen(str); i++) 
        if (str[i] != ' ') surname[j++] = str[i];
        else break;
    j = 0;
    for (int l = i + 1; l < strlen(str); l++) 
        if (str[l] != ' ') name[j++] = str[l];
        else break;

    fprintf(f, "%s, %s %s!", "Hello", name, surname);
    fclose(f);
    return 0;
}