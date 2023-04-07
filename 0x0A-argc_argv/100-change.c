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

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			coins++;
		}
		else if ((cents - 10) >= 0)
		{
			cents -= 10;
			coins++;
		}
		else if ((cents - 5) >= 0)
		{
			cents -= 5;
			coins++;
		}
		else if ((cents - 2) >= 0)
		{
			cents -= 2;
			coins++;
		}
		else
		{
		    cents--;
		    coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
