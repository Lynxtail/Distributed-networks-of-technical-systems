// В файле input.txt дана символьная строка не более 1000 символов. Необходимо заменить все
// буквы "а" на буквы "b" и наоборот, как заглавные, так и строчные. Результат записать в
// output.txt

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void){
    FILE *f;
    char tmp, str[1000];
    for (int i = 0; i < 1000; i++) str[i] = NULL;
    
    f = fopen("input.txt", "r");
    fgets(str, 1000, f);
    fclose(f);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') str[i]++;
        else if (str[i] == 'b' || str[i] == 'B') str[i]--;
    }

    f = fopen("output.txt", "w");
    fprintf(f, "%s", str);
    fclose(f);
    return 0;
}