#include "main.h"
#include <stdlib.h>
/**
* free_grid - for freeing the array
*@grid:the memory block
*@height:represents the height of the array
*Return:returns void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
