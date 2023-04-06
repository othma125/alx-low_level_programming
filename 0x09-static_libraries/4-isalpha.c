#include "main.h"

/**
 * _isalpha - function that check if parameter is an alphabet
 *@c: The number to be checked
 *
 * Return: true or false
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
