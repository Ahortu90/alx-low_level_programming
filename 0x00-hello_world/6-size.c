#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int 4;
	long int 4;
	long long int 8;
	char  1;
	float 4;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(1));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(4));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(4));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(8));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(4));
	return (0);
}
