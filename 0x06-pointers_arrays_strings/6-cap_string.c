#include "main.h"
#include <string.h>

/**
 * cap_string - change caracters of a string to upper case
 * @s: input string
 * Return: string
 */
char *cap_string(char *s)
{
	int i = 0;
	int capitalize = 1;

	while (i < strlen(s))
	{
		if (capitalize && s[i] <= 'z' && s[i] >= 'a')
			s[i] -= 32;
		if (s[i] == '-' || (s[i] <= 'z' && s[i] >= 'a')
		    || (s[i] <= 'Z' && s[i] >= 'A') || (s[i] <= '9' && s[i] >= '0'))
			capitalize = 0;
		else
			capitalize = 1;
		i++;
	}
	return (s);
}
