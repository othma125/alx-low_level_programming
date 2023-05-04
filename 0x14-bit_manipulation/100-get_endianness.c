#include "main.h"

/**
 * get_endianness - check code
 *
 * Return: 1or 0
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *adress = (char *)&x;

	return (*adress != '\0' ? 1 : 0);
}
