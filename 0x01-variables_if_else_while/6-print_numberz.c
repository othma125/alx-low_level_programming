#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '0';

	do {
		putchar(c);
		c++;
	} while (c <= '9');
	putchar('\n');
	return (0);
}
