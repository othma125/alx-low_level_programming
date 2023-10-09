#include "search_algos.h"


/**
 * binary_search - check code
 * @array: pointer to the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, m = 0;

	if (array == NULL)
		return (-1);
	while (i <= j)
	{
		printf("Searching in array: ");
		for (m = i; m < j; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);
		m = (i + j) / 2;
		if (array[m] < value)
			i = m + 1;
		else if (array[m] > value)
			j = m - 1;
		else
			return (m);
	}
	return (-1);
}
