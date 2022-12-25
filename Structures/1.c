// Описать структуру для представления информации о человеке: 
// фамилия (не более 30 символов), имя (не более 30 символов), возраст. 
// Описать функцию, которая для заданного массива из описанных структур определяет: 
//1.возраст самого старшего человека; 

#include <stdio.h>
#include <stdlib.h>

struct person { 
    char * name; 
    char * surname;
    int age; 
};

int max_age(struct person people[], int size){
    int max = 0;
    for (size_t i = 0; i < size; i++)
        if (people[i].age > max)
            max = people[i].age;
    return max;
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
    
    printf("Max age = %d ", max_age(people, n));
    return 0;
}