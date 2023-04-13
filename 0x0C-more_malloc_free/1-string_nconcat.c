#include <stdlib.h>
/**
 * length - integer
 *@s: string
 *
 * Return: length of the string
 */

unsigned int length(char *s)
{
	unsigned int len = 0;


	while (s != NULL && s[len])
		len++;
	return (len);
}
/**
 * string_nconcat - check code
 * @s1: string
 * @s2: string
 * @n: unsigned integer
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = s1 == NULL ? 0 : length(s1);
	unsigned int len2 = s2 == NULL ? 0 : length(s2);
	unsigned int i;
	char *s;

	len2 = (n <= len2 ? n : len2);
	s = malloc(1 + len1 + len2);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1 != NULL && i < len1; i++)
		s[i] = s1[i];
	for (i = 0; s2 != NULL && i < len2; i++)
		s[i + len1] = s2[i];
	s[i + len1] = '\0';
	return (s);
}
