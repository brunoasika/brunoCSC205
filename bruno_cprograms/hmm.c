#include <stdio.h>
int main()
{
int firstint;
float secondint;
printf("enter first value: ");
scanf("%d", &firstint);
printf("enter the float value: ");
scanf("%f", &secondint);
printf("%d\n", firstint++);
printf("%f\n", secondint++);
return 0;
}

