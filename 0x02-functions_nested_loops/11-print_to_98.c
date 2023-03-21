#include "main.h"

/**
 * print - print an integer
 *
 * @n: input integer
 * Return: None
 */
void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print(-n);
		return;
	}
	if (n < 10)
		_putchar('0' + n);
	else if (n < 100)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	else
	{
		print(n / 10);
		_putchar('0' + n % 10);
	}
}

/**
 * print_to_98 - int to 98
 * @n: input integer
 * Return: None
 */
void print_to_98(int n)
{
	int i;

	for (i = n ; i != 98 ;)
	{
		print(i);
		_putchar(',');
		_putchar(' ');
		if (n <= 98)
			i++;
		else
			i--;
	}
	print(98);
	_putchar('\n');
}
