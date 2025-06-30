#include "main.h"

/**
 * _strpbrk - Recherche la première occurrence d'un octet dans une chaîne
 * @s: Chaîne dans laquelle on recherche
 * @accept: Chaîne contenant les octets à rechercher
 *
 * Return un pointeur vers la première occurrence
 * d'un octet de accept dans s,
 * ou NULL si aucun octet n'est trouvé.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j; /* Variables pour parcourir les chaînes s et accept */

	for (i = 0; s[i] != '\0'; i++) /* Parcours chaque caractère de s */
	{
		for (j = 0; accept[j] != '\0'; j++) /* Parcours chaque caractère de accept*/
		{
			if (s[i] == accept[j]) /* Si le caractère de s est dans accept */
			{
				return (&s[i]); /* Retourne un pointeur vers ce caractère dans s */
			}
		}
	}
	return (NULL); /* Aucun caractère de accept trouvé dans s */
}
