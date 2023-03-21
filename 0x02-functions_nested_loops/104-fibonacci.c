#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, n = 98;

	unsigned long int a, b, sum;

	for (i = 0; i < n ; i++)
	{
		if (i == 0)
		{
			a = 0;
			b = 1;
			sum = 1;
		}
		else if (i == 1)
		{
			a = 1;
			b = 2;
			sum = 2;
		}
		else
		{
			sum = a + b;
			a = b;
			b = sum;
		}
		printf("%lu", sum);
		if (i != n - 1)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
