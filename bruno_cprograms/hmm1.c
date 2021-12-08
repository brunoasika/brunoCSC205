#include <stdio.h>


int main()
{
	int age, salary;
	char exp;
	printf("what is your age: \n");
	scanf("%d", &age);
	
	printf("are you experienced? type Y or N:  \n");
	scanf(" %c", &exp);
	
	
	if ((age>=40) && (exp == 'Y')){
		salary = 560000;
		printf("your salary is: %d\n", salary);
	}

	else if ((age >= 30 ) && (age < 40) && (exp == 'Y'))
	{
		salary = 480000;
		printf("your salary is: %d\n", salary);
	}
	
	else if ((age < 28) && (exp == 'Y'))
	{
		salary = 300000;
		printf("your salary is: %d\n", salary);
	}
	
	else if ((exp == 'N'))
	{
		salary = 100000;
		printf("your salary is: %d\n", salary);
	}
	else{
	printf("error \n");
	}
}
