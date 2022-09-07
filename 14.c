/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int a, a_1, a_2, a_3;
    scanf("%d", &a);
    a_1 = a % 10;
    a_2 = a / 10 % 10;
    a_3 = a / 100;
    if (a_1 > a_2) {
        if (a_1 > a_3)
        {
            printf("%d", a_1);
        } else {
            printf("%d", a_3);
        }
    } else {
        if (a_2 > a_3) {
            printf("%d", a_2);
        } else {
            printf("%d", a_3);
        }
    }
    return 0;
}
