#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees allocated memories
 * @grid: pointer
 * @height: row
 */
void free_grid(int **grid, int height)
{
	while (height >= 0)
		free(grid[height--]);
	free(grid);
}
