#include "search_algos.h"
#include <math.h>
/**
 * jump_search - check code
 * @array: pointer to the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0, k = 0;

	if (array == NULL)
		return (-1);
	k = sqrt(size);
	while (i < size)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += k;
	}
	j = i - k;
	printf("Value found between indexes [%lu] and [%lu]\n", j, i);
	if (i >= size)
		i = size - 1;
	while (j <= i)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}
	return (-1);
}
