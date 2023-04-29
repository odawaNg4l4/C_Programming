/*#include<stdio.h>

char fullName[30];
int main()
{
    printf("Enter name of character");
    fgets(fullName, sizeof(fullName), stdin);
    printf("You %s are like the stars", fullName);

    return 0;
}*/

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