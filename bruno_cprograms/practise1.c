#include <stdio.h>
int main(){
   int firstint, secondint;
   float firstfloat, secondfloat;
   printf("enter first integer value: ");
   scanf("%d", &firstint);
   printf("enter second integer value: ");
   scanf("%d", &secondint);
   printf("enter the first float value: ");
   scanf("%f", &firstfloat);
   printf("enter the second float value: ");
   scanf("%f", &secondfloat);
   
   printf("++first_integer = %d \n", ++firstint);
   printf("--second_integer = %d \n", --secondint);
   printf("++first_float = %f \n", ++firstfloat);
   printf("--second_float = %f \n", --secondfloat);
   
   return 0;
   
}
