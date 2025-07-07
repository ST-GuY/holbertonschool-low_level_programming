#include "main.h"
/**
 * free_grid - Libère un tableau à deux dimensions précédemment alloué.
 * @grid: Pointeur vers le tableau à libérer.
 * @height: Nombre de lignes du tableau.
 *
 * Description: Libère chaque ligne du tableau, puis le tableau lui-même.
 */
void free_grid(int **grid, int height)
{
	int i; /* Variable de boucle pour parcourir les lignes */

	for (i = 0; i < height; i++)
		/* Boucle sur chaque ligne du tableau */
	{
		free(grid[i]);
		/* Libère la mémoire allouée pour la ligne i */
	}
	free(grid);
	/* Libère la mémoire allouée pour le tableau principal */
}