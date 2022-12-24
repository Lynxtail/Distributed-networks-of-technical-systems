// В стартер боксе Geek Brains есть электронные чашечные весы (вместимость каждой чашки 1
// тонна) и гири массами 1г, 3г, 9г, 27г, и т.д. по одной штуке каждой массы. Менеджер из
// рекламного отдела взял такие весы и не знает, можно ли взвесить что-нибудь тяжелое и если
// можно, сколько гирь придется положить на весы (на любую чашку). Надо помочь ему.
// Формат входных данных: единственное натуральное число – масса взвешиваемого товара в
// граммах (не больше 1000000000).
// Формат выходных данных: единственное целое число – общее количество гирь или число –1
// если данный товар взвесить невозможно.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int mass, current, count = 0, eps = __INT_MAX__;
    _Bool flag = 1;
    scanf("%d", &mass);
    
    // while (mass != 0){
    //     tmp = mass % 3;
    //     // if (tmp > 1) { tmp -= 1; conter_weight += 1; conter_weight *= 10; }
    //     printf("%d", tmp);
    //     mass /= 3;
    // }
    // conter_weight /= 10;
    // printf("\n%d", conter_weight);

    // int count_1 = 0, count_2 = 0;
    
    while (mass > 0 && flag){
        for (int i = pow(3, (mass % 3 + 1)); i > 0; i /= 3){
            if (current != i) 
                if (abs(i - mass) < eps) {
                    eps = abs(i - mass);
                    current = i;
                }
            else if (current == 1) { flag = 0; break; }
            printf("|%d - %d| = %d\n", i, mass, abs(i - mass));
        }
        printf("weight %d; remains %d\n", current, eps);
        mass = eps;
        eps = __INT_MAX__;
        count++;
    }
    (flag) ? printf("Total count: %d", count) : printf("-1");
    return 0;
}