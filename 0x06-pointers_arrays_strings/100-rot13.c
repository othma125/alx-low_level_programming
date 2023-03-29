#include "main.h"
#include <string.h>

/**
 * rot13 - check the code
 * @s: input string
 * Return: string
 */
char *rot13(char *s)
{
	int i = 0;
	int j;
	char *inputs = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *outputs = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (i < strlen(s))
	{
		for (j = 0; j < strlen(inputs); j++)
		{
			if (s[i] == inputs[j])
			{
				s[i] = outputs[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
