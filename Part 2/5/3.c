// Необходимо вычислить выражение написанное в обратной польской записи. На вход подается
// строка состоящая из целых, не отрицательных чисел и арифметических символов. В ответединственное целое число - результат

#include <stdio.h>

int main(void){
    char tmp;
    int stack_1 = 0, stack_2 = 0;
    _Bool flag = 0;

    while ((tmp = getchar()) != '.'){
        
        if (tmp >= '0' && tmp <= '9')
            if (!flag) { stack_1 += (int) tmp - 48; stack_1 *= 10; }
            else if (flag) { stack_2 += (int) tmp - 48; stack_2 *= 10; }
        
        if (tmp == ' ') { 
            if (flag && stack_2 % 10 == 0) stack_2 /= 10; 
            else if (!flag && stack_1 % 10 == 0) stack_1 /= 10; 
            if (!flag) flag = 1; 
            printf("%d : %d\n", stack_1, stack_2);
        }
            
        
        switch (tmp){
        case '+':
            stack_1 += stack_2;
            stack_2 = 0;
            flag = 1;
            break;
        case '-':
            stack_1 -= stack_2;
            stack_2 = 0;
            flag = 1;
            break;
        case '*':
            stack_1 *= stack_2;
            stack_2 = 0;
            flag = 1;
            break;
        case '/':
            stack_1 /= stack_2;
            stack_2 = 0;
            flag = 1;
            break;
        
        default:
            break;
        }
    }

    printf("%d", stack_1);
    return 0;
}