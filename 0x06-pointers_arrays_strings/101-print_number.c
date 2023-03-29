#include "main.h"

/**
 * print_number - print numbers
 * @n: input number
 * Return: None
 */
void print_number(int n)
{
	int i = 1, m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
		m = n;
	while (i <= m)
		i *= 10;
	do {
		i /= 10;
		_putchar('0' + m / i);
		m = m % i;
	} while (i > 1);
}
