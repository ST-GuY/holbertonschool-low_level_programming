#include "main.h"

/**
 * _memcpy - Copie n octets de la zone mémoire src vers la zone mémoire dest
 * @dest: Pointeur vers la mémoire de destination
 * @src: Pointeur vers la mémoire source
 * @n: Nombre d'octets à copier
 *
 * Return: Retourne un pointeur vers la mémoire de destination (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* Parcourt chaque octet et le copie de src vers dest */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	/* Retourne le pointeur vers la mémoire de destination */
	return (dest);
}
