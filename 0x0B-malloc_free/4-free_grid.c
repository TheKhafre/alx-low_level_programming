#include "main.h"
#include <stdlib.h>
/**
* free_grid - a function that frees a 2 dimensional array grid
* that was created in the previous function
* @grid: the 2D array to be freed
* @height: the number of rows of the 2D array
* Return: returns nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
