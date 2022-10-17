// Проверить строку состоящую из скобок "(" и ")" на корректность

#include <stdio.h>

int main(void){
    char str;
    int open = 0;
    while((str = getchar()) != '.'){
        if (str == '(') open++;
        if (str == ')') open--;
    }
    (open == 0) ? printf("YES") : printf("NO");
    return 0;
}