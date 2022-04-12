#include <stdio.h>
#include "103-fibonacci.h"

/**
 * main - Entry point
 *
 * Return: Nothing.
 */

int main(void)
{
	unsigned long x, y, z, sum;

	z = 0;
	x = 0;
	y = 1;
	sum = 0;

	while (z < 4000000)
	{
		z = x + y;
		x = y;
		y = z;

		if (z % 2 == 0)
			sum += z;
	}

	printf("lu\n", sum);
	return (0);
}
