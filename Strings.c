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

#include<stdio.h>

int main()
{
    char greetings [] = {'H','E','L','L','O','W','O','R','L','D','\0'};
    char greetings1 [] = "Hello world";

    printf("%lu\n",sizeof(greetings));
    printf("%lu\n",sizeof(greetings1));

    return 0;
}