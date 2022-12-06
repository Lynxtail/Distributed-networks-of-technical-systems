// В файле input.txt даны два слова не более 100 символов каждое, разделенные одним пробелом.
// Найдите только те символы слов, которые встречаются в обоих словах только один раз.
// Напечатайте их через пробел в файл output.txt в лексикографическом порядке.

#include <stdio.h>
#include <math.h>
#include <string.h>

int count(char tmp, char str[]){
    int cnt = 0;
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == tmp) cnt++;
    return cnt;
}

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

    printf("%s\n", str_1);
    printf("%s\n", str_2);

    _Bool flags[(int) fminf(i, j)];
    for (int l = 0; l < (int) fmaxf(i, j); l++) flags[l] = 0;

    for (int l = 0; l < strlen(str_1); l++)
        for (int k = 0; k < strlen(str_2); k++)
            if (str_1[l] == str_2[k] && 
                count(str_1[l], str_1) + count(str_1[l], str_2) == 2) 
                    flags[l] ^= 1;

    printf("%s\n", str_1);
    printf("%s\n", str_2);
    // сравнить строки

    char str_ans[(int) fminf(i, j)];
    for (int i = 0; i < 100; i++) str_ans[i] = NULL;
    printf("%s\n", str_1);
    printf("%s\n", str_2);
    
    int k = 0;
    for (int l = 0; l < (int) fmaxf(i, j); l++)
        if (flags[l]) str_ans[k++] = str_1[l];
    printf("%s\n", str_1);
    printf("%s\n", str_2);

    for (int i = 0; i < sizeof(flags) / sizeof(flags[0]); i++) printf("%d, ", flags[i]);
    printf("\n%s %d - %s %d\n", str_1, count('l', str_1), str_2, count('l', str_2));
    printf("%s %d - %s %d\n", str_1, count('o', str_1), str_2, count('o', str_2));
    printf("%s", str_ans);

    f = fopen("output.txt", "w");
    fprintf(f, "%s", str_ans);
    fclose(f);
    return 0;
}