/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int numbers[] = {a, b, c, d, e};
    int i, max_num;
    max_num = a;
    for (i = 1; i < 5; i++){
        if (max_num < numbers[i]) {
            max_num = numbers[i];
        }
    }
    printf("%d", max_num);
    return 0;
}
