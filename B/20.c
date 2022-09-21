// Проверить число на простоту.


#include <stdio.h>

int main(void){
    int a, i, flag = 1;
    scanf("%d", &a);
    for (i = 2; i <= a/2; i++){
        if (a % i == 0) {
            flag = 0;
            break;
        }
    }
    (flag == 1) ? printf("YES") : printf("NO");
    return 0;
}