#include <stdio.h>
#include <102-fibonacci.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int mai(void)
{
	int count;
	usigned long x, y, z;

	x = 0;
	y = 1;

	for (count =1; count <= 49; count++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu, ", z);
	}
	
	printf("%lu\n", z + x);
	return (0);
}
