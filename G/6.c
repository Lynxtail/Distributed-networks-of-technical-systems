// В файле input.txt символьная строка не более 1000 символов. Необходимо проверить, является
// ли она палиндромом (палиндром читается одинаково в обоих направлениях). Реализовать
// логическую функцию is_palindrom(str) и записать ответ в файл output.txt.

#include <stdio.h>
#include <math.h>
#include <string.h>

char* is_palindrom(char str[]){
    int len = strlen(str);
    _Bool flag = 1;
    int tmp = (len % 2 == 0) ? len / 2 : len / 2 + 1;
    for (int i = 0, j = len - 1; i < tmp; i++, j--)
        if (str[i] != str[j]) { flag = 0; break; }
    if (flag) return "YES";
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