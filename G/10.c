// В файле input.txt дана строка слов, разделенных пробелами. Найти самое длинное слово и
// вывести его в файл output.txt. Случай, когда самых длинных слов может быть несколько, не
// обрабатывать.

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

    char tmp_word[strlen(str)], max_word[strlen(str)];
    for (int i = 0; i < strlen(str); i++) { tmp_word[i] = NULL; max_word[i] = NULL; }
    int count = 0, max_count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            if (count > max_count) max_count = count;
            count = 0;
            for (int j = 0; j < strlen(max_word); j++) max_word[j] = NULL;
            strcpy(max_word, tmp_word);
            for (int j = 0; j < strlen(tmp_word); j++) tmp_word[j] = NULL;
            continue;
        }
        tmp_word[count] = str[i];
        count++;
    }

    f = fopen("output.txt", "w");
    fprintf(f, "%s ", max_word);
    fclose(f);
    return 0;
}