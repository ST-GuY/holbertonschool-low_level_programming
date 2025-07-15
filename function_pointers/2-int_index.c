#include "function_pointers.h"

/**
 * int_index - Cherche l'indice du premier élément
 * correspondant à un critère.
 * @array: Le tableau d'entiers à parcourir.
 * @size: Le nombre d'éléments dans le tableau.
 * @cmp: Pointeur vers la fonction de comparaison à utiliser.
 *
 * Return: L'indice du premier élément pour lequel cmp retourne non 0.
 * -1 si aucun élément ne correspond ou si les paramètres sont invalides.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i; /* Variable d'itération */

	/* Vérifie si les paramètres sont valides */
	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	/* Parcourt chaque élément du tableau */
	for (i = 0; i < size; i++)
	{
		/* Si cmp retourne non 0, l'élément correspond au critère */
		if (cmp(array[i]) != 0)
		{
			return (i); /* Retourne l'indice de l'élément */
		}
	}

	/* Aucun élément ne correspond au critère */
	return (-1);
}