#include<stdio.h>
#include<stdlib.h>
int main()
{
   int i;
   int x = 0;
   for(i=0; i<=16; i++){
      x = x + i;
      printf("%d\n", x);
   }
}