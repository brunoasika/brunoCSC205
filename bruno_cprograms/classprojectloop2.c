#include <stdio.h>
int main()
{
int num;
printf("enter the value of num: \n");
scanf("%d", &num);
int j;
int i, a;
for(i = 1; i <= 12; i++ )
{
for(j = 1; j<=num; j++)
{
 a = i * j;
printf("%d \t", a);
if(j==num){
printf("\n");
}
}
}
return 0;
}
