#include<stdio.h>

int main()
{
    char name[] = "Odawa Ngala";
    printf("%c", name[2]);

    return 0;
}

#include<stdio.h>

int main()
{
   char name[] = "Odawa Ngala!";
    name[0] = 'J';
    printf("%s", name);
}

#include<stdio.h>

int main()
{
char dogName[] = "GermanShepherd";
int i;

for (i = 0; i < 14; ++i) 
{
  printf("%c\n", dogName[i]);
}
}