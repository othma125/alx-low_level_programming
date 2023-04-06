#include "main.h"
/**
 *_strspn - search the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 *@s:segment targeted
 *@accept:reference bytes container
 *
 *Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int condition, j;
	char *str = s;

	for (; *str != '\0'; str++)
	{
		condition = 1;
		j = 0;
		for (; accept[j] != '\0'; j++)
		{
			if (accept[j] == *str)
			{
				n++;
				condition = 0;
				break;
			}
		}
		if (condition == 1)
			return (n);
	}
	return (0);
}
