#include "6-abs.h"

/**
 * _abs - Check 6-abs
 * @r: An integre input
 * Description: This function returns absolut value of a number
 * Return: Absolut value of number r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else 
		return (r * -1);
}
