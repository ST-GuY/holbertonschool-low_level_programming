#include <stdlib.h>

/**
 * array_range - Crée un tableau contenant
 * tous les entiers de min à max inclus.
 * @min: Valeur minimale.
 * @max: Valeur maximale.
 *
 * Return: Pointeur vers le tableau nouvellement alloué.
 *         NULL si min > max ou si malloc échoue.
 */
int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}

