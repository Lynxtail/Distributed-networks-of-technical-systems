// Требуется реализовать только одну функцию, которая в данном списке находит адрес блока
// памяти занимающий больше всего места. Адрес хранится в поле address, поле size -
// соответствующий размер данного блока. Если список пустой, то функция должна возвращать
// NULL. Если есть несколько таких блоков, то вернуть адрес любого из них.

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct list {
    void *address;
    size_t size;
    char comment[64];
    struct list *next;
} list;

void * findMaxBlock(list *head){
    size_t max = 0; void *ans; _Bool flag = 0;
    while (head != NULL){
        printf("%p - %d\n", head->address, head->size);
        if (head->size > max) { max = head->size; ans = head->address; }
        head = head->next;
    }
    return ans;
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
    
    printf("%p", findMaxBlock(head));
    return 0;
}