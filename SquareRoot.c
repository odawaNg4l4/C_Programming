#include<stdio.h>
#include<math.h>

int main() {
    
  double x;
  printf("Enter a number: ");
  scanf("%lf", & x);
  
  double ans = sqrt(x);
  printf("The square root of %.2lf: %.2lf", x, ans);
  
  return 0;
}
