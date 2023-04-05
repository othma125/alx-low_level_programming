#include "main.h"
#include <string.h>

/**
 * palindrome - check code
 * @s1: string
 * @s2: string
 * Return: integer
 */
int palindrome(char *s1, char *s2)
{
	return (*s1 != *s2 ? 0 : (s1 < s2 ? palindrome(s1 + 1, s2 - 1) : 1));
}
/**
 * is_palindrome - check code
 * @s: string
 * Return: integer
 */
int is_palindrome(char *s)
{
	int i = strlen(s) - 1;

	return (palindrome(s, s + i));
}
