#include <stdio.h>
#include "11-print_to_98.h"

/**
 * print_to_98 - Check 11-print_to_98
 * @n: An input integer
 * Description: function that print all natural numbers
 * from n to 98, followed by a ne line.
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
