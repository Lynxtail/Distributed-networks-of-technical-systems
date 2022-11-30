// В последовательности записаны целые числа от M до N ( M меньше N, M больше или равно 1)в
// произвольном порядке, но одно из чисел пропущено (остальные встречаются ровно по одному
// разу). N не превосходит 1000. Последовательность заканчивается числом 0. Определить
// пропущенное число

#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort_array(int size, int a[]){
    _Bool is_sorted;
    do {
        is_sorted = 1;
        for(int i = 0; i < size - 1; i++){
            if(a[i] > a[i + 1]){
                swap(&a[i], &a[i + 1]);
                is_sorted = 0;
            }
        }
    } while(is_sorted !=1);
}

void find_missed(int size, int a[])
{
   sort_array(size, a);
   int k = a[0];
   int i = 0;
   while(k == a[i]) {
       ++k; ++i;
   }
   printf("%d", k);
}

int main()
{
    int n = 10;
    int array[10] = {2, 3, 1, 4, 7, 6, 9, 8, 10, 0};
    // for (int i = 0; i < n; i++) scanf("%d", &array[i]);
    find_missed(n, array);
    return 0;
}