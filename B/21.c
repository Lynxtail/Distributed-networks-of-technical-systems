// Дан текст состоящий из английских букв и цифр, заканчивается символом «.» Перевести все
// заглавные английские буквы в строчные.


#include <stdio.h>
#include <ctype.h>

int main(void){
    char str_tmp[50], i;
    scanf("%[^.]s", str_tmp);
    for (i = 0; i < 50; i++){
        str_tmp[i] = (char) tolower((int) str_tmp[i]);
    }
    printf("%s", str_tmp);
    return 0;
}