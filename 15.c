#include <stdio.h>

int main(void)
{
    int x_1, y_1, x_2, y_2;
    float k, b;

    scanf("%d %d %d %d", &x_1, &y_1, &x_2, &y_2);
    
    // (x - x_1) / (x_2 - x_1) = (y - y_1) / (y_2 - y_1) --->
    // y = (y_2 - y_1) / (x_2 - x_1) * x - (y_2 - y_1) * x_1 / (x_2 - x_1) + y_1
    k = (float) (y_2 - y_1) / (x_2 - x_1);
    b = y_1 - (y_2 - y_1) * x_1 / (float) (x_2 - x_1);
    printf("%.2f %.2f", k, b);

    return 0; 
}