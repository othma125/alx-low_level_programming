#include "main.h"

/**
 * _atoi - function name
 * @s: input string
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 0, negative = 0;

	while (*(s + i) != '\0')
	{
		if (s[i] == '-')
			negative = 1;
		else if (s[i] == '+')
			negative = 0;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			n *= 10;
			n += s[i];
			n -= '0';
		}
		else
		{
			negative = 0;
			n = 0;
		}
		i++;
	}
	if (negative)
		return (-n);
	return (n);
}
