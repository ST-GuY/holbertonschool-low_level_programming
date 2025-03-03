#include "main.h"

/**
 * _strpbrk - Recherche la première occurrence
 * dans `s` de n'importe quel caractère de `accept`.
 * @s: La chaîne de caractères dans laquelle on cherche.
 * @accept: La chaîne de caractères à rechercher.
 * Return: Un pointeur vers le premier caractère
 * de `s` qui est dans `accept`, ou NULL si non trouvé.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
	for (i = 0; accept[i] != '\0'; i++)
	{
		if (*s == accept[i])
		{
			return (s);
		}
	}
		s++;
	}
	return (NULL);
}
