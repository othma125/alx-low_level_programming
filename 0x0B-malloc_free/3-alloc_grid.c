#include <stdlib.h>

/**
 * alloc_grid - creats a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to pointer
 */
int **alloc_grid(int width, int height)
{
	int h, w;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	h = 0;
	while (h < height)
	{
		grid[h] = (int *)malloc(width * sizeof(int));
		if (grid[h] == NULL)
			return (NULL);
		w = 0;
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
		h++;
	}
	return (grid);
}
