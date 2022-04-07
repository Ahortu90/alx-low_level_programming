#include <unistd.h>
#include <stdio.h>

/**
 * main - Prints quote to the standard error
 *
 * Return: zero on success
 *
 */
int main(void)
{
	write(0, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
