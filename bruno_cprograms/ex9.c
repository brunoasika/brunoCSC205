#include <stdio.h>

int main()
{
   int a;
   float b;
   
   printf("enter integer and then a float: ");
   
   //taking multiple inputs
   scanf("%d%f", &a, &b);
   
   printf("you entered %d and %f", a, b);
   return 0;
   
}
