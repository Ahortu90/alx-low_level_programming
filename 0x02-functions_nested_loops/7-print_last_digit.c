#include "stdio.h"
#include "main.h"

/**
 * print_last_digit - Check 7-print_last_digit
 * @r: An integer input
 * Description: This finction prints the last digit of a number
 * Return: laste digit of number r
 */
int print_last_digit(int r)
{
	int n;

	if (r < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;
	_putchar((n % 10) + '0');
	return (n % 10);
}
