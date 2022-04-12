#include "stdio.h"
#include "main.h"

/**
 * _abs - Check 6-abs
 * @r: An integre input
 * Description: This function returns absolut value of a number
 * Return: Absolut value of number r
 */
int _abs(int r)
{
	if (r < 0)
		r = r * -1;
	return (r);
}
