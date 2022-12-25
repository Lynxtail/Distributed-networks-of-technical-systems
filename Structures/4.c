//Описать структурный тип для представления сбора информации с датчика температуры, необходимые
//поля: дата (день, месяц, год) и температура. Используя этот тип, описать функцию, принимающую 
//на вход массив таких данных и упорядочивающую его по неубыванию, по дате. 

#include <stdio.h>
#include <stdlib.h>

struct temp_sensor{ 
    int day;
    int month;
    int year;
    int temp; 
};

void sort(struct temp_sensor t[], int size){
    int temp = 0;
    for (size_t i = 0; i < size - 1; i++)
        for (size_t j = 0; j < size - i - 1; j++)
            if (t[j].day > t[j + 1].day){
                t[j].day ^= t[j + 1].day;
                t[j + 1].day ^= t[j].day;
                t[j].day ^= t[j + 1].day;
            } 
    
    for (size_t i = 0; i < size - 1; i++)
        for (size_t j = 0; j < size - i - 1; j++)
            if (t[j].month > t[j + 1].month){
                t[j].month ^= t[j + 1].month;
                t[j + 1].month ^= t[j].month;
                t[j].month ^= t[j + 1].month;
            }
    
    for (size_t i = 0; i < size - 1; i++)
        for (size_t j = 0; j < size - i - 1; j++)
            if(t[j].year > t[j + 1].year){
                t[j].year ^= t[j + 1].year;
                t[j + 1].year ^= t[j].year;
                t[j].year ^= t[j + 1].year;
            }
}

int main(void){
    struct temp_sensor t[]= {13, 12, 22, 0,
                            11, 12, 22, -6,            
                            12, 12, 22, -5,
                            10, 12, 22, -3};
    int n = sizeof(t)/sizeof(t[0]);
    
    for (size_t i = 0; i < n; i++)
        printf("Date: %d.%d.%d\nTemperature: %d\n\n", t[i].day, t[i].month, t[i].year, t[i].temp);
    
    sort(t, n);
    printf("\nSorted data:\n");
    for (size_t i = 0; i < n; i++)
        printf("Date: %d.%d.%d\nTemperature: %d\n\n", t[i].day, t[i].month, t[i].year, t[i].temp);
    return 0;
}