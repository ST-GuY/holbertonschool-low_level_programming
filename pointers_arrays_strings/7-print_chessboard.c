#include "main.h"

/**
 * print_chessboard - Affiche un échiquier.
 * @a: Un tableau 2D de taille 8x8 représentant l'échiquier.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
	{
		_putchar(a[i][j]);
	}
		_putchar('\n');
	}
}
