// Известно, что шахматная доска имеет размерность 8х8 и состоит из клеток 2х цветов,
// например, черного и белого (см. рисунок). Каждая клетка имеет координату, состоящую из
// буквы и цифры. Горизонтальное расположение клетки определяется буквой от A до H, а
// вертикальное – цифрой от 1 до 8. Заметим, что клетка с координатой А1 имеет черный цвет.
// Требуется по заданной координате определить цвет клетки.

#include <stdio.h>

void get_color(char letter, int number){
    char horizontal[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int vertical[] = {1, 2, 3, 4, 5, 6, 7, 8};
    _Bool color = 1; // 0 -- чёрный, 1 -- белый
    for (int i = 0; i < 8; i++) {
        color ^= 1;
        for (int j = 0; j < 8; j++) {
            color ^= 1;
            if (letter == horizontal[i] && number == vertical[j]) {
                break;
            }
        }
    }
    puts(color ? "white\0" : "black\0");
}

int main(void){
    char letter;
    int number;
    scanf("%c%d", &letter, &number);
    get_color(letter, number);
    return 0;
}