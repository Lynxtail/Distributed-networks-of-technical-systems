// В файле input.txt дано предложение. Необходимо заменить все имена «Ling» на «Cao» и
// результат записать в файл output.txt

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

    char *tmp = strstr(str, "Ling");
    int j = 0; char rep[] = "Cao";
    
    while (tmp != NULL) {
        for (int i = (tmp - str) + 2; i < strlen(str); i++) str[i] = str[i + 1];
        j = 0;
        for (int i = tmp - str; i < (tmp - str) + 3; i++) str[i] = rep[j++];
        tmp = strstr(str, "Ling");
    }
    
    f = fopen("output.txt", "w");
    fprintf(f, "%s", str);
    fclose(f);
    return 0;
}