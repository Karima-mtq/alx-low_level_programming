#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function
 * @grid: int
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return (NULL);


	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			free(grid[i]);
		}
	}
	free(grid);
}
