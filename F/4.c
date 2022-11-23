// Написать только одну функцию. Всю программу отправлять не надо. Вывести в порядке
// возрастания цифры, входящие в строку. Цифра - количество.
#include <stdio.h>

void print_digit(char s[]){
    int arr[100];
    int cnt = 0;
    for (int i = 0; i < 100; i++)
        if ("0" <= &s[i] && &s[i] <= "9"){
            arr[cnt] = (int) s[i];
            cnt++;
        }
    for (int i = 0; i <= cnt; i++) printf("%d ", arr[i]);
}

int main(void){
    char str[100];
    char tmp;
    int i = 0;
    while ((tmp = getchar()) != '.')
    {
        str[i] = tmp;
        i++;
    }
    print_digit(str);
    return 0;
}