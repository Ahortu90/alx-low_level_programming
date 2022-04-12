#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
in main(void)
{
	int i, sum = 0;

	fot (i = 0; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
