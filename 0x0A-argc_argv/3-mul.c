#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main function with argc and argv
 * @argc: parameters counter
 * @argv: parameters names
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul = 1, converted, i = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	do {
		converted = atoi(argv[i]);
		if (converted == 0 && strcmp(argv[i], "0") != 0)
		{
			printf("Error\n");
			return (1);
		}
		mul *= converted;
		i++;
	} while (i < argc);
	printf("%d\n", mul);
	return (0);
}
