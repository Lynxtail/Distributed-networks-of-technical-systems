#include <stdio.h>
#include <stdlib.h>

int is_two_same(int size, int *a);


int main(void) {

    int n;
    int tmp;
    int count = 0;
    int d = 1;
    puts("Vvedite Razmer massiva");
    scanf("%d", &n);

    int mass[10] = {1,2,3,4,5,9,6,3,3};

   /* 
    for(int i; i<n; i++) {

        mass[i] = rand() % 100;
        printf("%d ", mass[i]);
    }
    */

    

    for( int i =0; i<n; i++){
        tmp = mass[i];
        count = 0;
        for( int j = 0; j<n; j++){

            if( tmp == mass[j]){
                count++;

                if( count == 2 ){
                    printf("\n1");
                    d = 0;
                    return 1;
                }


            }



        }
    }

    if(d){
        printf("\n0");
        return 0;
    }

    
}