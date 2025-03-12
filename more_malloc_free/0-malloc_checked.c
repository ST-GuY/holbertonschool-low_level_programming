#include <stdlib.h>

/**
 * malloc_checked - Alloue de la mémoire
 * et vérifie si l'allocation a réussi.
 * @b: Nombre d'octets à allouer.
 *
 * Return: Pointeur vers la mémoire allouée.
 *         Si `malloc` échoue, termine le programme avec `exit(98)`.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

