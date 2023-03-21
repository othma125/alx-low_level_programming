#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, max = 4000000;
	long int a, b, f_sum = 0, sum = 0;

	for (i = 0; f_sum <= max ; i++)
	{
		if (i == 0)
		{
			a = 0;
			b = 1;
			f_sum = 1;
		}
		else if (i == 1)
		{
			a = 1;
			b = 2;
			f_sum = 2;
		}
		else
		{
			f_sum = a + b;
			a = b;
			b = f_sum;
		}
		if (f_sum <= max && f_sum % 2 == 0)
			sum += f_sum;
	}
	printf("%ld", sum);
	putchar('\n');
	return (0);
}
