#include "main.h"

/**
 * more_numbers - print numbers
 *
 * Return: None
 */
void more_numbers(void)
{
	int i, j = 0;
	char c;

	for (j = 0 ; j < 10 ; j++)
	{
		c = '0';
		i = 0;
		do {
			if (i > 9)
				_putchar('1');
			_putchar(c);
			i++;
			c++;
			if (i == 10)
				c = '0';
		} while (i <= 14);
		_putchar('\n');
	}
}
