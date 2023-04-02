#include<stdio.h>
#include<stdlib.h>

//Create a function
void myFunction() {
  printf("A goatie in the making");
}

int main() {
  myFunction();
  printf("\n"); // call the function
  myFunction();
  return 0;
}

//Function Parameters
void myFunction(){
    printf("Hello %s\n", name);
}

int main(){
    myFunction("ODAWA");
    myFunction("NGALA");
    return;
}
