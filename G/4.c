// В файле input.txt даны два слова не более 100 символов каждое, разделенные одним пробелом.
// Найдите только те символы слов, которые встречаются в обоих словах только один раз.
// Напечатайте их через пробел в файл output.txt в лексикографическом порядке.

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void){
    FILE *f;
    char tmp, str_1[100], str_2[100];
    for (int i = 0; i < 100; i++) { str_1[i] = NULL; str_2[i] = NULL; }
    
    f = fopen("input.txt", "r");
    int i = 0;
    while ((tmp = fgetc(f)) != ' ') str_1[i++] = tmp;
    int j = 0;
    while ((tmp = fgetc(f)) != EOF) str_2[j++] = tmp;
    fclose(f);

    _Bool flags[(int) fminf(i, j)];
    for (int l = 0; l < (int) fmaxf(i, j); l++) flags[l] = 0;

    for (int l = 0; l < strlen(str_1); l++)
        for (int k = 0; k < strlen(str_2); k++)
            if (str_1[l] == str_2[k]) flags[l] ^= 1;

    // найти уникальные символы
    // сравнить строки

    // char str_ans[(int) fminf(i, j)];
    // int k = 0;
    // for (int l = 0; l < (int) fmaxf(i, j); l++)
    //     if (flags[l]) str_ans[k++] = str_1[l];

    int rc = strcmp(str_1, str_2);
    const char *rel = rc < 0 ? "precedes" : rc > 0 ? "follows" : "equals";
    printf("[%s] %s [%s]\n", str_1, rel, str_2);

    // f = fopen("output.txt", "w");
    // fprintf(f, "%s", str_ans);
    // fclose(f);
    return 0;
}