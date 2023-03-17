#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 1;
	int comb1, comb2;
	int max = 90;

	do {
		comb1 = n;
		comb2 = (n % 10) * 10 + (n / 10);
		if (comb1 < comb2)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			if (n < max - 1)
			{
				putchar(',');
				putchar(' ');
			}
		}
		n++;
	} while (n < max);
	putchar('\n');
	return (0);
}
