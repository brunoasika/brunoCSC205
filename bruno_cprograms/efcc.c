#include <stdio.h>

int main()
{
	char *efcc [5][3] = {"Aigbogun", "Murtala", "Okorocha", "Adewale", "Osazuwa", "Internal affairs", "Justice", "Defense", "Power and steel", "Petroleum", "south west", "north east", "south south", "south west", "south east" };
	
	
	
	for(int i = 0; i<5; i++)
	{
		for (int j = 0; j<3; j++)
		{
			printf("Name of commissioner  Ministry  Geopolitical zone %s\t", efcc[i][j]);
			printf("\n\n\n");
			}
			}
		return 0;
	}
