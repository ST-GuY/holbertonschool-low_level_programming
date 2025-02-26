#include "main.h"

/**
 * print_square - Affiche un carré avec le caractère '#'.
 * @size: Taille du carré (nombre de lignes et colonnes).
 *
 * Description :
 * Cette fonction affiche un carré de taille 'size' en utilisant le
 * caractère '#'. Si 'size' est inférieur ou égal à 0, la fonction
 * affiche seulement un retour à la ligne.
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
        	{
			for (j = 0; j < size; j++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

