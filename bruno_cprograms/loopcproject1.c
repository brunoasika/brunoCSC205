#include<stdio.h>
int main() {
int portions ;
char menu;
printf("Menu \n P = poundo yam/edinkaiko soup \n F = fried rice and chicken \n A = amala and ewedu soup \n E = eba and egusi soup \n W = white rice and stew \n");
printf("what do you want to gobble:   ");
scanf("%s", &menu);
switch(menu)
{
case 'p':
printf("what quantity do you want: ");
scanf("%d", &portions);
printf("the total amount is: %d \n", (3200 * portions));
break;
case 'f':
printf("what quantity do you want: ");
scanf("%d", &portions);
printf("the total amount is: %d \n", ( 3000 * portions));
break;
case 'a':
printf("what quantity do you want: ");
scanf("%d", &portions);
printf("the total amount is: %d \n", ( 2500 * portions));
break;
case 'e':
printf("what quantity do you want: ");
scanf("%d", &portions);
printf("the total amount is: %d \n", ( 2000 * portions));
break;
case 'w':
printf("what quantity do you want: ");
scanf("%d", &portions);
printf("the total amount is: %d \n", ( 2500 * portions));
break;

}
return 0;
}

