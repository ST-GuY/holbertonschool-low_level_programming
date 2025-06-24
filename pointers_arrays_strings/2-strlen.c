#include "main.h"


/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Return: La longueur de la chaîne.
 */

int _strlen(char *s)
{
	char *p;

	if (s == NULL)
		return (0);

	p = s;
	
	while (*p != '\0')
	{
		p++;
	}
		return (p - s);

/**
int _strlen(char *s)
{
	int count;
	while (*s != '\0')
	{
			count++;
			s++;
	}
	return (count);
}
*/
}
