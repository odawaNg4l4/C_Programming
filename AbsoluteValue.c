#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y;

    x = abs(5);

    y = abs(10);

    printf("Absolute vlue of %d\n", x);
    printf("Absolute value of %d\n", y);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
     
    int main()
    {
        int x, y;

        printf("Enter a number to get its absolute value");
        scanf("%d\n", &x);

        y = abs(x);

        printf("Absolute value of %d is %d\n", x , y);
        return 0;
    }    
 
