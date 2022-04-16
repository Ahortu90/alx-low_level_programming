#include <stdio.h>
#include <math.h>

/**
 * main - function that Prints the largest prime factor of the number 612852475143,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int i = 3, n = 612852475143;

	for (; i < 12057; i += 2)
	{
		while (n % i == 0 && n != i)
			n /= i;
	}

	printf("%ld\n", n);

	return (0);
}
