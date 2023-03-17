#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int max = 90;

	do {
		putchar(n / 10 + '0');
		putchar(n % 10 + '0');
		if (n < max - 1)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	} while (n < max);
	putchar('\n');
	return (0);
}
