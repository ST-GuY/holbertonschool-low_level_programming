#include "main.h"

/**
 * malloc_checked - Alloue de la mémoire dynamiquement avec malloc
 * @b: Taille de la mémoire à allouer, en octets
 *
 * Description:
 * Cette fonction tente d’allouer une mémoire de taille 'b' octets.
 * Si malloc échoue (retourne NULL), le programme est terminé immédiatement
 * avec un code de sortie 98. Sinon, la fonction retourne le pointeur vers
 * la mémoire allouée.
 *
 * Return: Un pointeur vers la mémoire allouée. Le programme quitte avec
 * le code 98 en cas d'échec de l’allocation.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;
	/* Déclaration du pointeur qui stockera l'adresse de la mémoire allouée */

	ptr = malloc(b);
	/* Appel de malloc pour allouer 'b' octets de mémoire */

	if (ptr == NULL)
	/* Vérifie si malloc a échoué (pointeur NULL) */
	{
		exit(98);
		/* Termine le programme avec le code 98 en cas d'échec de l'allocation */
	}

	return (ptr);
	/* Retourne le pointeur vers la mémoire allouée si tout s'est bien passé */
}
