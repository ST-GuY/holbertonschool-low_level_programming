#include "main.h"

/**
 * _strncpy - Copie au plus n caractères d'une chaîne src dans dest
 * @dest: pointeur vers la chaîne de destination
 * @src: pointeur vers la chaîne source
 * @n: nombre maximum de caractères à copier
 *
 * Return: pointeur vers la chaîne de destination (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i; /* Variable pour l'index de la boucle */

	/* Copier les caractères de src vers dest tant qu'on*/
	/*est dans la limite n et que src[i] n'est pas '\0' */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Remplir le reste de dest avec '\0' si src est plus courte que n */
	for (; i < n; i++)
		dest[i] = '\0';

	/* Retourner le pointeur vers la chaîne de destination */
	return (dest);
}
