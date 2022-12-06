// В файле input.txt дано предложение. Необходимо определить, сколько слов заканчиваются на
// букву 'а'. Ответ записать в файл output.txt

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

    int count = 0;
    for (int i = 0; i < strlen(str); i++) 
        if (str[i] == ' ' && str[i - 1] == 'a') count++; 

    f = fopen("output.txt", "w");
    fprintf(f, "%d", count);
    fclose(f);
    return 0;
}