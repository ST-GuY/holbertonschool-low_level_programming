#include <stdlib.h>

/**
 * free_grid - Libère un tableau 2D alloué dynamiquement par alloc_grid.
 * @grid: Tableau 2D à libérer.
 * @height: Nombre de lignes du tableau.
 */
void free_grid(int **grid, int height)
{
	int i;


	if (grid == NULL)
		return;


	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}


	free(grid);
}

