#include "main.h"

/**
 * main - Prints the number, from 0 to 9,
 * followed by a new line
 * REturn: Always 0
 */

void print_numbers(void)
{
	int i;

	for(i = '0'; i <= '9'; i++)
	{
	
		_putchar(i);
	}
	_putchar('\n');
}
