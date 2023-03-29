#include "main.h"

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

	while (s[i] != '\0')
	{
		for (j = 0; characters[j] != '\0'; j++)
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
