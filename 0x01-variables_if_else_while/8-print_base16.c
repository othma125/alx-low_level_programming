#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char c = 'a';

	do {
		if (n < 10)
			putchar(n);
		else
		{
			putchar(c);
			c++;
		}
		n++;
	} while (n < 16);
	putchar('\n');
	return (0);
}
