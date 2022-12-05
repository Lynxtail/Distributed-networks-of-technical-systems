// Считать число N из файла input.txt. Сформировать строку из N символов. N четное число, не
// превосходящее 26. На четных позициях должны находится четные цифры в порядке
// возрастания, кроме 0, на нечетных позициях - заглавные буквы в порядке следования в
// английском алфавите. Результат записать в файл output.txt

#include <stdio.h>
#include <math.h>


int main(void){
    FILE *f;
    int n;
    f = fopen("input.txt", "r");
    fscanf(f, "%d", &n);
    fclose(f);
    f = fopen("output.txt", "w");
    int modifier[] = {2, 4, 6, 8};
    for (int i = 0; i < n / 2; i++) fprintf(f, "%c%d", 'A' + i, modifier[i % 4]);
    fclose(f);
    return 0;
}