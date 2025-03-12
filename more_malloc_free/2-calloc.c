#include <stdlib.h>
#include <limits.h>
#include <stdint.h>
/**
 * _calloc - Alloue de la mémoire pour un tableau et initialise à 0.
 * @nmemb: Nombre d'éléments.
 * @size: Taille d'un élément en octets.
 *
 * Return: Pointeur vers la mémoire allouée ou NULL en cas d'échec.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (nmemb > 0 && size > (SIZE_MAX / nmemb))
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		((char *)ptr)[i] = 0;

	return (ptr);
}

