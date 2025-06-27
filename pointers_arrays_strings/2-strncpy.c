#include "main.h"

/**
 * _strncpy - Copie au plus n caractères de la chaîne src vers dest
 * @dest: pointeur vers la chaîne de destination
 * @src: pointeur vers la chaîne source
 * @n: nombre maximal de caractères à copier
 *
 * Return: pointeur vers la chaîne de destination (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i; /* Variable utilisée pour parcourir les caractères */

	/* Copier les caractères de src dans dest tant que i < n et que src[i] n'est pas le caractère nul */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Si src est plus courte que n, ajouter un seul caractère nul à la suite */
	if (i < n)
	{
		i++;
		dest[i] = '\0';
	}

	/* Retourne le pointeur vers la chaîne destination */
	return (dest);
}

