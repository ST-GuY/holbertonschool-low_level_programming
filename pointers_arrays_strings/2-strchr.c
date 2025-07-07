#include "main.h"

/**
 * _strchr - Recherche la première occurrence
 * d’un caractère dans une chaîne
 * @s: Pointeur vers la chaîne de caractères
 * @c: Caractère à rechercher
 *
 * Return: Pointeur vers la première occurrence
 * du caractère c dans la chaîne s,
 * ou NULL si le caractère n’est pas trouvé
 */

char *_strchr(char *s, char c)
{
	/* Parcourt la chaîne tant qu’on n’a pas atteint le caractère nul */
	while (*s)
	{
		/* Si le caractère actuel est égal à c, retourner son adresse */
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		/* Avance au caractère suivant dans la chaîne */
		s++;
	}

	/* Si le caractère recherché est '\0', retourner un pointeur vers lui */
	if ((char)c == '\0')
	{
		return ((char *)s);
	}

	/* Si le caractère n’a pas été trouvé, retourner NULL */
	return (NULL);
}
