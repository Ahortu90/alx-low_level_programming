#include <unistd.h>

/**
 * main - Prints qoute to the standard error
 *
 * Retrun: zero on success
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful" -" Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
