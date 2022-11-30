//Упаковать строку Дана строка состоящая из маленьких латинских букв 'a'..'z'. 
//В конце строки точка. Необходимо заменить повторяющиеся буквы на <буква><количество повторений> 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compression_str(char s[]) {
    int i = 0, j = 0, count = 1;
    char str[100];
    int arr_cnt[100];
    while (s[i] != '.') {
        while(s[i] == s[i+1]) {
            ++count; ++i;
        }
        str[j] = s[i];
        arr_cnt[j] = count;
        ++i; ++j;
        count = 1;
    }
    for (int i = 0; i < j; i++) printf("%c%d", str[i], arr_cnt[i]);
}

int main(void)
{
    char str[100];
    gets(str);
    compression_str(str);
    return 0;
}
