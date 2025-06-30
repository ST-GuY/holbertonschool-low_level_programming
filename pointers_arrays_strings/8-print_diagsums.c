#include "main.h"

/**
 * print_diagsums - Affiche la somme des deux diagonales d’une matrice carrée
 * @a: pointeur vers le premier élément de la matrice (tableau 1D)
 * @size: taille de la matrice (nombre de lignes ou de colonnes)
 *
 * Description: La fonction parcourt les diagonales principale et secondaire
 * d’une matrice carrée stockée sous forme de tableau 1D, puis affiche
 * leurs sommes respectives.
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	/* Initialisation des sommes à zéro */
	sum1 = 0;
	sum2 = 0;

	/* Boucle pour parcourir chaque ligne de la matrice */
	for (i = 0; i < size; i++)
	{
		/* Ajout de l'élément de la diagonale principale à sum1 */
		sum1 = sum1 + a[i * size + i];

		/* Ajout de l'élément de la diagonale secondaire à sum2 */
		sum2 = sum2 + a[i * size + (size - 1 - i)];
	}

	/* Affichage des deux sommes séparées par une virgule */
	printf("%d, %d\n", sum1, sum2);
}
