// Составить функцию, которая преобразует текущий символ цифры в число. Написать
// программу считающую сумму цифр в тексте

#include <stdio.h>

int digit_to_num(char c){
    return (int) c - (int) '0';
}

int main(void){
    char str;
    int sum = 0;
    while((str = getchar()) != '.')
        if (str >= '0' && str <= '9') 
            sum += digit_to_num(str);
    printf("%d", sum);
    return 0;
}