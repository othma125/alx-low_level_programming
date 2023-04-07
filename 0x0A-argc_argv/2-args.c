#include <stdio.h>

/**
 * main - main function with argc and argv
 * @argc: parameters counter
 * @argv: parameters names
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	do {
		printf("%s\n", argv[i]);
		i++;
	} while (i < argc);
	return (0);
}
