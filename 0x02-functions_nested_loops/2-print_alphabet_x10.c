#include "stdio.h"
#include "main.h"

/**
 * print_alphabet_x10 - Check 2-print_alphabet_x10
 * Description: function uses _putchar function to print
 * alphabet in lowercases 10 time
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
