#include <stdlib.h>
/**
 * array_range - check code
 * @min: integer
 * @max: integer
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *array;
	int i, j = 0;

	if (min > max)
	return (NULL);
	array = malloc(sizeof(*array) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++, j++)
		array[j] = i;
	return (array);
}
