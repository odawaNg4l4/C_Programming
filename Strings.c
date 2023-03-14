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

//SPECIAL CHARACTERS
#include<stdio.h>

int main()
{
    char txt [] = "It\'s a woman\'s world come on";
    printf("%s", txt);
}

//STRING FUNCTIONS
#include<stdio.h>
#include<string.h>

int main()
{
    char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabet));
    printf("%d\n", sizeof(alphabet));

    return 0;
}

//CONCANTENATE STRINGS
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20] = "Hello\t";
    char str2[] = "World";

    strcat(str1,str2);

    printf("%s",str1);
    return 0;
}