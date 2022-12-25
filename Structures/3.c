// Описать структуру для представления информации о человеке: 
// фамилия (не более 30 символов), имя (не более 30 символов), возраст. 
// Описать функцию, которая для заданного массива из описанных структур определяет: 
//3.количество людей, у которых есть однофамильцы; 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person { 
    char * name; 
    char * surname;
    int age; 
};

int similar_surnames(struct person people[], int size){
    int count = 0, ans = 0;
    for (size_t i = 0; i < size; i++){
        count = 1;
        for (size_t j = i + 1; j < size; j++)
            if(people[i].surname == people[j].surname) count++;
        if (count > 1) ans += count;
    }
    return ans;
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
    
    printf("Amount people with similar surnames = %d ", similar_surnames(people, n));
    return 0;
}