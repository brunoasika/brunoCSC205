#include <stdio.h>

int main()
{
	int a[3][2]=	{ {667, 422}, {233, 515}, {183, 335} };
	
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("element at a[%d],[%d] = %d\n", i, j,a[i][j]);
		
	
		}
		
		
	}
	int b[3][2]={ {100, 151}, {245, 312}, {333, 578} };
	
	for (int y = 0; y < 3; y++)
	{
		for (int z = 0; z < 2; z++)
		{
			printf("element at b[%d],[%d] = %d\n", y, z,b[y][z]);
		
	
		}
		
		
	}
	int c,d;
	for (c = 0; c < 3; c++)
	{
		for (d = 0; d < 2; d++)
		{
			printf(" result is: %d", a[i][j] * b[y][z] );
		
	
		}
		
		
	}
	return 0;
}	
