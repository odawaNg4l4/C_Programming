// C Program To demonstrate
// Size of operators
#include <stdio.h>
int main()
{
    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(double));
    return 0;
}
// C Program To demonstrate
// operand as expression
#include <stdio.h>
int main()
{
    int a = 0;
    double d = 10.21;
    printf("%lu", sizeof(a + d));
    return 0;
}
// C Program to illustrate
// that the 'sizeof' operator
// is a 'compile time operator'
#include <stdio.h>

int main(void)
{
    int y;
    int x = 11;

    // value of x doesn't change
    y = sizeof(x++);

    // prints 4 and 11
    printf("%i %i", y, x);

    return (0);
}


// C Program
// demonstrate the method
// to find the number of elements
// in an array
#include <stdio.h>
int main()
{
    int arr[] = { 1, 2, 3, 4, 7, 98, 0, 12, 35, 99, 14 };
    printf("Number of elements:%lu ",
    sizeof(arr) / sizeof(arr[0]));
    return 0;
}



