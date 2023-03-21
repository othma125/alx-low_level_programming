#include "main.h"
/**
 * times_table - check the code
 *
 * Return: None.
 */
void times_table(void)
{
	int i, j, multiplication;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			multiplication = i * j;
			if (j == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (multiplication / 10 == 0)
					_putchar(' ');
				else
					_putchar('0' + multiplication / 10);
				_putchar('0' + multiplication % 10);
			}
		}
		_putchar('\n');
	}
}
