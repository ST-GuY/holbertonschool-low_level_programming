#include <stdlib.h>

/**
 * alloc_grid - Alloue dynamiquement
 * un tableau 2D d'entiers et l'initialise à 0.
 * @width: Largeur (nombre de colonnes).
 * @height: Hauteur (nombre de lignes).
 *
 * Return: Pointeur vers le tableau 2D alloué, ou NULL en cas d'échec.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(width * sizeof(int));
	if (grid[i] == NULL)
		{
		for (int k = 0; k < i; k++)
			free(grid[k]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}

