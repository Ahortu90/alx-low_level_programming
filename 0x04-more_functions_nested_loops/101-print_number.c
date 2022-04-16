#include "main.h"
#include <stdio.h>

/**
 * print_number - function thats Print an integer.
 * @n; Is the integer to prints.
 *
 * Retrun: Nothing!
 */

void print_number(int n)
{
	unsigned int m, d, count;

	if (n < 0)
	{
		_putchar(45);
		m = m * -1;
	}

	d = m;
	count = 1;
	
	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
