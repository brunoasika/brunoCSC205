#include <stdio.h>
int main(){
float csc201, csc205, sta205, total, average, percentage;
printf("enter your score for csc201: ");
scanf("%f", &csc201);
printf("enter your score for csc205: ");
scanf("%f", &csc205);
printf("enter your score for sta205: ");
scanf("%f", &sta205);

total = csc201 + csc205 + sta205;
printf("your total score is: %f \n", total);

average = (total/3);
printf("your average is: %f \n", average);

percentage = (total/30)*100;
printf("your percentage is: %f percent \n", percentage);

return 0;
}
