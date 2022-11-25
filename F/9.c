#include <stdio.h>
#include <stdlib.h> 
  
void sort_array(int n, int *a);  
void swap_negmax_last( int n, int *mass);
  
void swap_negmax_last( int n, int *mass){

    //int n;
    int tmp=0;
    int tmp1=0;
    int j = 0;
    int tmpindex =0;

    //puts("Vvedite Razmer massiva");
    //scanf("%d", &n);

    //int mass[n];
    int neg_mass[n];


    //for(size_t i=0; i<n; i++) 
    //{
    //    scanf("%d", &mass[i]);
    //}

    //printf("\n");

    printf("before\n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", mass[i]);
    }

    for ( size_t i = 0; i < n; i++)
    {
        if (mass[i]<0)
        {
            neg_mass[j] = mass[i];
            j++;
        }
        
    }

    sort_array(j,neg_mass);
    tmp = neg_mass[j-1];

    for( int i = 0; i<n; i++)
    {   
        for (size_t j = 0; j < n; j++)
        {
            if (mass[j]>mass[j+1])
            {
                tmp1 = mass[j];
                tmpindex = j;
            }
            
        }

    }
    
    printf("\n%d", tmpindex);
    for (size_t i = 0; i < n; i++)
    {
        if (mass[i] == tmp)
        {
            mass[i] = tmp1;
            mass[tmpindex] = tmp;
        }
        
    }

    printf("\n");
    printf("after\n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", mass[i]);
    }
    
    
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
