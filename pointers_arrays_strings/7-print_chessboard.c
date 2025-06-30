#include "main.h"

/**
 * print_chessboard - affiche un échiquier 8x8
 * @a: pointeur vers un tableau 2D de 8x8 caractères
 *
 * Description: parcourt chaque case de l’échiquier et affiche
 *              les caractères ligne par ligne.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	/* Parcours de chaque ligne de l’échiquier */
	for (i = 0; i < 8; i++)
	{
		/* Parcours de chaque colonne de la ligne i */
		for (j = 0; j < 8; j++)
		{
			/* Affiche le caractère de la case a[i][j] */
			printf("%c", a[i][j]);
		}
		/* Passe à la ligne suivante après avoir affiché une ligne complète */
		printf("\n");
	}
}
