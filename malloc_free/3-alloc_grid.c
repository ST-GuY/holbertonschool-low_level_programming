#include "main.h"
/**
 * alloc_grid - Alloue un tableau à deux dimensions d'entiers.
 * @width: Le nombre de colonnes du tableau.
 * @height: Le nombre de lignes du tableau.
 *
 * Return: Pointeur vers le tableau alloué ou NULL en cas d'erreur.
 */
int **alloc_grid(int width, int height)

{
	int **grid;  /* Pointeur vers le tableau de pointeurs (chaque ligne) */
	int i, j;    /* Variables de boucle pour les lignes et colonnes */
	int k = 0;   /* Variable utilisée pour libérer la mémoire en cas d'erreur*/

	if (width <= 0 || height <= 0)
		/* Vérifie si les dimensions sont valides */
		return (NULL);
	grid = malloc(height * sizeof(int *));
	/* Alloue la mémoire pour les pointeurs de lignes */
	if (grid == NULL)
		/* Vérifie si l'allocation a échoué */
		return (NULL);

	for (i = 0; i < height; i++)
		/* Boucle pour chaque ligne */
	{
		grid[i] = malloc(width * sizeof(int));
		/* Alloue la mémoire pour chaque ligne (colonnes) */

		if (grid[i] == NULL)
			/* Vérifie si l'allocation d'une ligne a échoué */
		{
			for (k = i - 1; k >= 0; k--)
				/* Libère toutes les lignes déjà allouées */
				free(grid[k]);

			free(grid);
			/* Libère le tableau principal */
			return (NULL);
		}

		for (j = 0; j < width; j++)
			/* Initialise chaque cellule à 0 */
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
	/* Retourne le tableau alloué et initialisé */
}
