#include <unistd.h>
#include <stdio.h>

/**
 * main - Prints quote to the standard error
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	write(2, "and that piece of art is usefu\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
