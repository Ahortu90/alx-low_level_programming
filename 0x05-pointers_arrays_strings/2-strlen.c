#include "main.h"

/**
 * _strlen - count the length of a string
 * @s: string
 *
 * Return: the Value of the lenght i
 */

int -strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
