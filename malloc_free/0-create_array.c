#include <stdlib.h>

/**
 * create_array - Crée un tableau de chars et l'initialise avec un char donné.
 * @size: Taille du tableau à allouer.
 * @c: Caractère à utiliser pour initialiser chaque case.
 *
 * Return: Pointeur vers le tableau alloué ou NULL si échec.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;


	if (size == 0)
		return (NULL);


	array = malloc(size * sizeof(char));


	if (array == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

