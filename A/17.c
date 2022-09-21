// Ввести номер месяца и вывести название времени года.

#include <stdio.h>

int main(void) 
{
    int month;
    scanf("%d", &month);
    switch (month / 3)
    {
        case 1:
            printf("spring");
            break;
        
        case 2:
            printf("summer");
            break;
        
        case 3:
            printf("autumn");
            break;
        
        default:
            printf("winter");
            break;
    }
    return 0;
}