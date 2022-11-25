#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compression_str( char *mass, int n);


int compression_str(char *mass, int n){

    //int n;
    register size_t i,j;
    int count = 0;
    //puts("Vvedite Razmer massiva");
    //scanf("%d", &n);
    //fflush(stdin);

    //char mass[n];
    char zip_mass[n];


    //puts("Enter str");
    //fgets(mass,n,stdin);
    //fflush(stdin);



    for ( i = 0; i < (int)strlen(mass)-1; i++)
    {
        if (mass[i]==mass[i+1])
        {
            count++;

        } else {
            count++;
            printf("%c - %d\n",mass[i], count);
            count = 0;
        }
        
    }
    

    

   return 0;

}