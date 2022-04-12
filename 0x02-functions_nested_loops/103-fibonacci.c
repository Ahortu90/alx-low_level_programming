#include <stdio.h>
#include "main.h"

/**
 * main - sum even fibonacci numbers under 4 million.
 * Return: Nothing.
 */
int main(void)
{
	unsigned long count, i, j, k, sums;

	i = sums = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		if (k % 2 == 0 && k < 4000000)
		{
			summs += k;
		}
	}
	printf("%lu\n", sums);
	return (0);
}
