#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	do {
		putchar(c);
		c++;
	} while (c <= 'z');
	c = 'A';
	do {
		putchar(c);
	} while (c <= 'Z');
	putchar('\n');
	return (0);
}
