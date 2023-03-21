#include "main.h"

/**
 * print - print an integer
 * @m: input condition
 * @n: input integer
 * Return: None
 */
void print(int n, int m)
{
	if (m == 1)
	{
		_putchar(',');
		_putchar(' ');
	}
	if (n < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + n);
	}
	else if (n < 100)
	{
		if (m == 1)
			_putchar(' ');
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	else
	{
		print(n / 10, 0);
		_putchar('0' + n % 10);
	}
}
/**
 * print_times_table - check the code
 * @n: input integer
 * Return: None.
 */
void print_times_table(int n)
{
	int i, j, multiplication;

	if (n > 15 || n < 0)
		return;
	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			multiplication = i * j;
			if (j == 0)
				_putchar('0');
			else
				print(multiplication, 1);
		}
		_putchar('\n');
	}
}
