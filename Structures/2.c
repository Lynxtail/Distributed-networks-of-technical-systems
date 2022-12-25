// Описать структуру для представления информации о человеке: 
// фамилия (не более 30 символов), имя (не более 30 символов), возраст. 
// Описать функцию, которая для заданного массива из описанных структур определяет: 
//2.количество людей с заданным именем (имя также является параметром функции); 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person { 
    char * name; 
    char * surname;
    int age; 
};

int search_by_name(struct person people[], int size, char name[]){
    int count = 0;
    for (size_t i = 0; i < size; i++)
        if (!strcmp(people[i].name, name)) count++;
    return count;
}

int main(void){
    struct person people[]= {{"A", "J", 20}, 
                             {"A", "B", 25}, 
                             {"G", "B", 57}, 
                             {"G", "G", 30}, 
                             {"T", "W", 32}, 
                             {"D", "T", 48}};
    int n = sizeof(people)/sizeof(people[0]);
    
    for (size_t i = 0; i < n; i++){
        printf("Name:%s\n", people[i].name);
        printf("Surname:%s\n", people[i].surname);
        printf("Age: %d\n\n", people[i].age);
    }
    
    char name[] = "A";
    printf("Amount people with given name = %d ", search_by_name(people, n, name));
    return 0;
}