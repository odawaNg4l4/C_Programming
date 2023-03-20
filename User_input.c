#include<stdio.h>

char fullName[30];
int main()
{
    printf("Enter name of character");
    fgets(fullName, sizeof(fullName), stdin);
   

    printf("You %s are like the stars", fullName);

    return 0;
}