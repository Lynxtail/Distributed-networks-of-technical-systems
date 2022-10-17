#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 if(argc!=2) {
 printf("Вы забыли ввести своё имя.\n");
 exit(1);
 }
 printf("Привет %s", argv[1]);
 return 0;
}