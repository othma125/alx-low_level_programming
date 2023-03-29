#include "main.h"

/**
 * cap_string - change caracters of a string to upper case
 * @s: input string
 * Return: string
 */
char *cap_string(char *s)
{
	int i = 0, j;
	int capitalize = 0;
	char *characters = ",.(){};!?\"";

	while (s[i] != '\0')
	{
		if (capitalize && s[i] <= 'z' && s[i] >= 'a')
			s[i] -= 32;
		capitalize = 0;
		for (j = 0; characters[j] != '\0'; j++)
			if (characters[j] == s[i])
			{
				capitalize = 1;
				break;
			}
		i++;
	}
	return (s);
}
