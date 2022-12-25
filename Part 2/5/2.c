// На стандартном потоке ввода задаются две символьные строки, разделённые символом
// перевода строки. Каждая из строк не превышает по длине 104. В строках не встречаются
// пробельные символы.
// На стандартный поток вывода напечатайте два числа, разделённых пробелом: первое число —
// длина наибольшего префикса первой строки, являющегося суффиксом второй; второе число —
// наоборот, длина наибольшего суффикса первой строки, являющегося префиксом второй.
// Сравнение символов проводите с учётом регистра (т.е. символы 'a' и 'A' различны).

#include <stdio.h>
#include <string.h>

int main(void){
    char str_1[104], str_2[104], tmp_str_1[104], tmp_str_2[104];
    gets(str_1); gets(str_2);

    char *prefix_end = strchr(str_1, '_'), *suffix_begin = strrchr(str_2, '_');
    int count = 0, old_count = 0; 

    strncpy(tmp_str_1, str_1, strlen(str_1) - strlen(prefix_end));
    strcpy(tmp_str_2, suffix_begin);

    // printf("%s\n%s", tmp_str_1, tmp_str_2);

    size_t i = 0, j = 0; 
    while (i < strlen(tmp_str_1)){
        while (j < strlen(tmp_str_2)) {
            while (tmp_str_1[i] == tmp_str_2[j]) { count++; j++; i++; }
            if (old_count < count) old_count = count;
            count = 0;
            j++;
        }
        i++;
    }
    printf("%d ", old_count);
    
    prefix_end = strchr(str_2, '_'); suffix_begin = strrchr(str_1, '_');
    count = 0; old_count = 0; 
    
    strncpy(tmp_str_2, str_2, strlen(str_2) - strlen(prefix_end));
    strcpy(tmp_str_1, suffix_begin);

    i = 0, j = 0; 
    while (i < strlen(tmp_str_2)){
        while (j < strlen(tmp_str_1)) {
            while (tmp_str_2[i] == tmp_str_1[j]) { count++; j++; i++; }
            if (old_count < count) old_count = count;
            count = 0;
            j++;
        }
        i++;
    }
    printf("%d ", old_count);
    return 0;
}
