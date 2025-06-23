#include "main.h"

/**
 * print_square - Affiche un carré de taille donnée avec le caractère '#'
 * @size: La taille du carré (hauteur et largeur)
 *
 * Description: Cette fonction imprime un carré
 * composé de caractères '#'
 * avec un nombre de lignes et de colonnes égal à la valeur de `size`.
 * Si `size` est inférieur ou égal à 0, elle imprime
 * simplement une nouvelle ligne.
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
