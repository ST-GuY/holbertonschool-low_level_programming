#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Applique une fonction à
 * chaque élément d'un tableau d'entiers.
 * @array: Le tableau d'entiers à parcourir.
 * @size: Le nombre d'éléments dans le tableau.
 * @action: Pointeur vers la fonction à appliquer
 * à chaque élément du tableau.
 *
 * Description: Pour chaque élément du tableau,
 * cette fonction appelle la fonction
 * fournie via le pointeur 'action', en lui passant l'entier correspondant.
 * Si 'array' ou 'action' est NULL, la fonction ne fait rien.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* Déclare la variable d'itération */

	if (array == NULL || action == NULL)
	{
		/* Si le tableau ou la fonction est NULL, on ne fait rien */
		return;
	}

	for (i = 0; i < size; i++)
	{
		/* Appelle la fonction 'action' sur l'élément array[i] */
		action(array[i]);
	}
}
