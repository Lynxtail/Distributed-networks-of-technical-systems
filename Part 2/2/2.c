// Требуется реализовать только одну функцию, которая анализирует данный список и
// возвращает сколько всего памяти используется. Адрес хранится в поле address, поле size -
// соответствующий размер данного блока. Если список пустой, то функция должна возвращать
// NULL

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct list {
    void *address;
    size_t size;
    char comment[64];
    struct list *next;
} list;

size_t totalMemoryUsage(list *head){
    size_t sum = NULL;
    while (head != NULL){
        printf("%p - %d\n", head->address, head->size);
        sum += head->size;
        head = head->next;
    }
    return sum;
}

int main(void){
    list *head = NULL, *second = NULL, *third = NULL;
    head = (list *)malloc(sizeof(list));
    second = (list *)malloc(sizeof(list));
    third = (list *)malloc(sizeof(list));

    head->address = 140525067852320;
    head->size = 10;
    // head->comment = "main.c";
    head->next = second;

    second->address = 140525067852350;
    second->size = 30;
    // second->comment = "main.c";
    second->next = third;

    third->address = 140525067852900;
    third->size = 100;
    // third->comment = "main.c";
    third->next = NULL;
    
    printf("%d", totalMemoryUsage(head));
    return 0;
}