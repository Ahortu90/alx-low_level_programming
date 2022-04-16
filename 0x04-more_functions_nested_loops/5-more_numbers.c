#include "main.h"

/**
 * more_number - function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: Always 0 (Success).
 */

void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n => 10)
			{
				_putchar((n /10) + 48);
			}
			_putchar((n % 10) + 48);
		}
			_putchar('\n')
	}
}
