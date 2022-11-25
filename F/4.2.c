#include <stdio.h>
#include <ctype.h>
#include <string.h>

void check(char masNum[], int len);
void sort_array(int size, char *a);


void print_digit(char strk[]) {
    char digit[200];
    int j = 0;
    for( int i; i< (int)strlen(strk); i++ )
        if( isdigit(strk[i]) !=0 ){
            digit[j] = strk[i];
            j++;
        }
    chek(digit,j);
    return 0;
}

void sort_array(int size, char *a){
    for(int i = 0 ; i < size; i++)
        for(int j = 0 ; j < size  ; j++) 
            if(a[j] > a[j+1]) {           
                int tmp = a[j];
                a[j] = a[j+1] ;
                a[j+1] = tmp; 
           }
}

void check(char masNum[], int len) {

    int Ntmp;
    int i = 0, i2 = 0;
    int tmp;
    char MasCout[1000], newMasNum[1000], newMasscout[1000];
    int count=0, dnum;
  
    sort_array(len, masNum);
    for(i=0; i<len; i++) {
        count = 0;
        for(int j=i; j<len; j++) 
            if( masNum[i]==masNum[j]) count++;
        MasCout[i] = count;
        if( masNum[i] != masNum[i-1]) {
            newMasNum[i2] = masNum[i];
            newMasscout[i2] = MasCout[i];
            i2++;   
        }
    }
    for(int j = 0; j<i2; j++) printf("%c - %d \n", newMasNum[j], newMasscout[j]);
    return 0;
}
