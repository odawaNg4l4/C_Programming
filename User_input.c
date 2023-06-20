#include<stdio.h>

char fullName[30];
int main()
{
   printf("Enter full name");
   fgets(fullName, sizeof(fullName) , stdin);
   printf("Hello %s", fullName);
    return 0;
}

#include<stdio.h>
int myNum;
char myChar;

int main()
{
    printf("Enter age and letter");
    scanf("%d %c", &myNum, &myChar);
    printf("Your age is %d\n", myNum);
    printf("Your letter is %c\n" , myChar);
}