#include "main.h"
#include <string.h>

/**
 * string_toupper - change caracters of a string to upper case
 * @s: input string
 * Return: string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (i < strlen(s))
	{
		if (s[i] <= 'z' && s[i] >= 'a')
			s[i] -= 32;
		i++;
	}
	return (s);
}
