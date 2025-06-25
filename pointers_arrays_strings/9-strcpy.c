#include "main.h"

/**
 * _strcpy - Copie la chaîne de caractères pointée par src vers dest
 * @dest : Pointeur vers le tampon de destination
 * @src : Pointeur vers la chaîne source à copier
 * Return : Pointeur vers dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
