// В файле input.txt дано предложение. Необходимо заменить все имена «Cao» на «Ling» и
// записать результат в файл output.txt.

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

    int tmp = strstr(str, "Cao");
    int j = 0; char rep[] = "Ling";
    while (tmp != NULL) {
        printf("%d ", tmp);
        for (int i = strlen(str); i > tmp + 1; i--) str[i] = str[i - 1];
        j = 0;
        for (int i = tmp - 1; i < tmp + 3; i++) str[i] = rep[j++];
        tmp = strstr(str, "Cao");
    }
    
    f = fopen("output.txt", "w");
    fprintf(f, "%s", str);
    fclose(f);
    return 0;
}