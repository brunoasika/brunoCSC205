#include <stdio.h>
int main(){
char letters, A, B, C, D, E, F, G, H, I, J;
printf("enter the character between A and J: ");
scanf("%c", &letters);
 
 char i = {A, B, C, D, E, F, G, H, I, J};
 for (letters = 0; letters < 9; letters++){
 printf("%c", letters);
 }
 return 0;
 
 }
