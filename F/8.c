#include <stdio.h>
#include <stdlib.h>

int find_max_array(int size, int a[]){
    int max = 0;
    for (int i = 0; i < size; i++)
        if (max < a[i]) max = a[i];
    return max;
}

int find_min_array(int size, int a[]){
    int min = __INT_MAX__;
    for (int i = 0; i < size; i++)
        if (min < a[i]) min = a[i];
    return min;
}

int find_missed(int n, int mass[], int min, int max){
    for (int i = 0; i < n; i++)
        if (mass[i + 1] != (mass[i] + 1))
            printf("missed: %d", mass[i] + 1);
}

int main(void){
    int n = 5;
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int min = find_min_array(n, arr);
    int max = find_max_array(n, arr);
    find_missed(n, arr, min, max);
    return 0;
}

















void sort_array(int size, int *a){
        


    for(int i = 0 ; i < size; i++) { 

        for(int j = 0 ; j < size  ; j++) { 

            if(a[j] > a[j+1]) {           

                int tmp = a[j];
                a[j] = a[j+1] ;
                a[j+1] = tmp; 
           }
        }
    }
}

