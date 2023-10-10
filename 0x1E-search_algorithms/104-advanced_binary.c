#include "search_algos.h"


/**
 * advanced_binary - check code
 * @array: pointer to the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, k;

	if (!array || size == 0)
		return (-1);
	while (i <= j)
	{
		printf("Searching in array: ");
		for (k = i; k <= j; k++)
			printf("%d%s", array[k], (k < j) ? ", " : "\n");
		k = (j + i) / 2;
		if (array[k] == value)
		{
			if (array[k - 1] == value)
				j = k;
			else
				return (k);
		}
		else if (array[k] < value)
			i = k + 1;
		else
			j = k - 1;
	}
	return (-1);
}
