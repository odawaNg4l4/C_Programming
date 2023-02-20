#include<stdio.h>

int main()
{
    unsigned long sum = 0;
    unsigned int count = 0;

    printf("Enter the number of integers you want to sum:");
    scanf("%u", &count);

    unsigned int i;
    for(i= 1; i<= count; ++i)
    {
    printf("Odawaz");
    sum += i;
    }



    printf("\n Total of the first %u numbers is\n", count);
    printf("%lu\n", sum);



    return 0;
}
