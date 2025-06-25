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
}


void puts_half(char *str)
{
	int longeur = _strlen(str);
	int moitier = longeur / 2;

		for (moitier = 5; moitier < longeur; moitier++)
		{
			_putchar(str[moitier]);
		}

		_putchar('\n');
}
