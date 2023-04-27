#include <stdio.h>

void __attribute__((constructor)) hare(void);
/**
 * hare - check the code
 *
 * Return: none
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
