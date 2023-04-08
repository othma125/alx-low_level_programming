#include <stdio.h>

/**
 * main - main function with argc and argv
 * @argc: parameters counter
 * @argv: parameters names
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, converted, i = 1, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	do {
		converted = 0;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			converted *= 10;
			converted += argv[i][j] - '0';
		}
		sum += converted;
		i++;
	} while (i < argc);
	printf("%d\n", sum);
	return (0);
}
