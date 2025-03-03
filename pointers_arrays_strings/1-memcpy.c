#include "main.h"

/**
 * _memcpy - Copie une zone mémoire.
 * @dest: Pointeur vers la zone mémoire de destination.
 * @src: Pointeur vers la zone mémoire source.
 * @n: Nombre d'octets à copier.
 *
 * Return: Un pointeur vers `dest`.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* Copier n octets de src vers dest */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest); /* Retourner le pointeur dest */
}
