#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function with argc and argv
 * @argc: parameters counter
 * @argv: parameters names
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul = 1, i = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (0);
	}
	do {
		mul *= atoi(argv[i]);
		i++;
	} while (i < argc);
	printf("%d\n", mul);
	return (0);
}
