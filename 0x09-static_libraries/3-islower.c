#include "main.h"

/**
 * _islower - function that print lower case
 *@c: The number to be checked
 *
 * Return: true or false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
