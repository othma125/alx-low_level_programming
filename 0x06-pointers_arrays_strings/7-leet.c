#include "main.h"
#include <string.h>

/**
 * leet - check the code
 * @s: input string
 * Return: string
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char *characters = "aAeEoOtTlL";
	char *numbers = "43071";

	while (i < strlen(s))
	{
		for (j = 0; j < strlen(characters); j++)
		{
			if (s[i] == characters[j])
			{
				s[i] = numbers[j / 2];
				break;
			}
		}
		i++;
	}
	return (s);
}
