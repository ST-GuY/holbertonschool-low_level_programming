#include "main.h"
#include <stdio.h>

/**
 * _puts - Affiche une chaîne de caractères suivie d'un retour à la ligne.
 * @str: Pointeur vers la chaîne de caractères à afficher.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

