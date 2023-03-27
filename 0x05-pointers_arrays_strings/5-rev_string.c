#include "main.h"
#include <string.h>

/**
 * rev_string - function name
 * @s: input string
 * Return: none
 */
void rev_string(char *s)
{
	int len = strlen(s), i = 0, j = len - 1;
	char aux;

	while (j > i)
	{
		aux = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = aux;
		j--;
		i++;
	}
}
