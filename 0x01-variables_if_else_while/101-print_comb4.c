#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int k;
	int max = 790;

	do {
		putchar(n / 100 + '0');
		k = n % 100;
		putchar(k / 10 + '0');
		putchar(k % 10 + '0');
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
