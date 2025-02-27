#include "main.h"

/**
 * print_triangle - Affiche un triangle avec le caractère '#'.
 * @size: Taille du triangle (nombre de lignes).
 *
 * Description :
 * Cette fonction affiche un triangle droit aligné à droite.
 * Chaque ligne contient un nombre croissant de '#' précédé d'espaces.
 * Si 'size' est inférieur ou égal à 0,
 * elle affiche juste un retour à la ligne.
 */
void print_triangle(int size)
{
	int i, j, spaces, hashes;

	if (size > 0)
	{
		for (i = 1; i <= size; i++) /* Boucle pour chaque ligne */
	{
		spaces = size - i; /* Nombre d'espaces à afficher */
		hashes = i; /* Nombre de '#' à afficher */

		for (j = 0; j < spaces; j++) /* Affichage des espaces */
			_putchar(' ');

		for (j = 0; j < hashes; j++) /* Affichage des '#' */
			_putchar('#');

		_putchar('\n'); /* Nouvelle ligne après chaque rangée */
		}
	}
	else
	{
		_putchar('\n'); /* Affichage d'un retour à la ligne si size <= 0 */
	}
}

