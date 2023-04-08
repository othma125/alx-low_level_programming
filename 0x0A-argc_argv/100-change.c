#include <stdio.h>
#include <stdlib.h>

/**
 *main - main function
 *@argc: number of parameters
 *@argv: set of parameters
 *Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;
	int values[] = {25, 10, 5, 2, 1}, *v = values;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins += cents / *v;
		cents = cents % *v;
		v++;
	}
	printf("%d\n", coins);
	return (0);
}
