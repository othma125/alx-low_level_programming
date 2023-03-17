#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int comb1, comb2, comb3;
	int max = 1000;

	do {
		comb1 = n / 100;
		comb2 = (n % 100) / 10;
		comb3 = n % 10;
		if (comb1 < comb2 && comb2 < comb3)
		{
			putchar(comb1 + '0');
			putchar(comb2 + '0');
			putchar(comb3 + '0');
			if (n < 24)
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
