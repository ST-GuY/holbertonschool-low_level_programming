#include "main.h"

/**
 * create_array - Crée un tableau de caractères et
 * l'initialise avec un caractère
 * @size: la taille du tableau à créer
 * @c: le caractère à remplir dans le tableau
 *
 * Return: pointeur vers le tableau, ou NULL si échec ou size == 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;       /* Variable pour la boucle */
	char *array;          /* Pointeur vers le tableau de caractères */

	if (size == 0)
	{
		return (NULL);    /* Retourne NULL si la taille est 0 */
	}

	array = malloc(size * sizeof(char)); /* Allocation dynamique du tableau */

	if (array == NULL)
	{
		return (NULL);   /* Retourne NULL si malloc échoue */
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;    /* Remplit chaque case du tableau avec le caractère c */
	}

	return (array);      /* Retourne le pointeur vers le tableau rempli */
}
