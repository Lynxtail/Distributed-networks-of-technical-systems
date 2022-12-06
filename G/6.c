// В файле input.txt символьная строка не более 1000 символов. Необходимо проверить, является
// ли она палиндромом (палиндром читается одинаково в обоих направлениях). Реализовать
// логическую функцию is_palindrom(str) и записать ответ в файл output.txt.

#include <stdio.h>
#include <math.h>
#include <string.h>

char* is_palindrom(char str[]){
    int len = strlen(str);
    char first[len], second[len];
    for (int i = 0; i < len; i++) { first[i] = NULL; second[i] = NULL; }
    printf("\n%d %s %s", len, first, second);
    for (int i = 0; i < len / 2; i++) first[i] = str[i];
    printf("\n%d %s %s", len, first, second);
    if (len % 2 != 0) first[len / 2] = str[len / 2];
    printf("\n%d %s %s", len, first, second);
    for (int i = len / 2; i < len; i++) {
        printf("\n%s", str);
        second[i] = str[i];}
    printf("\n%d %s %s", len, first, second);
    if (strcmp(first, strrev(second)) == 0) return "YES";
    return "NO";
}

int main(void){
    FILE *f;
    char tmp, str[1000];
    for (int i = 0; i < 1000; i++) str[i] = NULL;
    
    f = fopen("input.txt", "r");
    fgets(str, 1000, f);
    fclose(f);

    printf("%s ", str);

    f = fopen("output.txt", "w");
    fprintf(f, "%s", is_palindrom(str));
    fclose(f);
    return 0;
}