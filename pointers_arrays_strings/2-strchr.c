#include "main.h"

/**
 * _strchr - Recherche un caractère dans une chaîne.
 * @s: Pointeur vers la chaîne de caractères.
 * @c: Caractère à rechercher.
 * Return: Un pointeur vers la première occurrence
 * de `c` dans `s`, ou NULL si non trouvé.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
		return (s);
	}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
