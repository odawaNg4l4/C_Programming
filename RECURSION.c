#include <stdio.h>
#include <stdlib.h>

int sum(int k);

int main()
{
   int result = sum(6);
   printf("%d", result);
    return 0;
}

int sum(int k){
    if(k > 0){
        return k + sum(k - 1);
        }
        else{
            return 0;
        }
}
