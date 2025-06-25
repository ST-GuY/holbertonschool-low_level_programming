#include "main.h"

/**
 * puts2 - Affiche un caractère sur deux d'une chaîne
 * @str: Pointeur vers la chaîne de caractères
 *
 * Cette fonction affiche un caractère sur deux de la chaîne passée
 * en paramètre, en commençant par le premier caractère,
 * suivi d'un saut de ligne à la fin.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
