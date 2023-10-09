#include "search_algos.h"

/**
 * exponential_search - check code
 * @array: pointer to the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	if (i >= size)
		high = size - 1;
	else
		high = i;
	low = i / 2;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	while (low <= high)
	{
		i = low + (high - low) / 2;
		printf("Searching in array: ");
		for (low = low; low <= high; low++)
		{
			if (low != high)
				printf("%d, ", array[low]);
			else
				printf("%d\n", array[low]);
		}
		if (array[i] == value)
			return (i);
		if (array[i] < value)
			low = i + 1;
		else
			high = i - 1;
	}
	return (-1);
}
