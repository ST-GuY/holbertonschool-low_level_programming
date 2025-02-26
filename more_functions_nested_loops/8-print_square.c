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
	int colonne, rang;

	if (size > 0)
	{
		for (colonne = 0; colonne < size; colonne++)
		{
			for (rang = 0; rang < size; rang++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

