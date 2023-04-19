#include <stdio.h>
#include <stdlib.h>

/**
 *main -  check code
 *@argc: number of arguments passed to the program
 *@argv: array of arguments
 *
 *Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 0, n;
	int (*f)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i <  n; i++)
	{
		opcode = *(unsigned char *)f;
		printf("%.2x", opcode);
		if (i == n - 1)
			continue;
		printf(" ");
		f++;
	}
	printf("\n");
	return (0);
}
