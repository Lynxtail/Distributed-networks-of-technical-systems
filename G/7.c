// В файле input.txt считать символьную строку, не более 10 000 символов. Посчитать количество
// строчных (маленьких) и прописных (больших) букв в введенной строке. Учитывать только
// английские буквы. Результат записать в файл output.txt.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
    FILE *f;
    char tmp, str[10000];
    for (int i = 0; i < 10000; i++) str[i] = NULL;
    
    f = fopen("input.txt", "r");
    fgets(str, 10000, f);
    fclose(f);

    int lower = 0, upper = 0;

    for (int i = 0; i < strlen(str); i++)
        if (islower(str[i])) lower++;
        else if (isupper(str[i])) upper++;

    f = fopen("output.txt", "w");
    fprintf(f, "%d %d", lower, upper);
    fclose(f);
    return 0;
}