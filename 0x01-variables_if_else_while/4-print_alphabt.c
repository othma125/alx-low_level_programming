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
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	} while (c <= 'z');
	putchar('\n');
	return (0);
}
