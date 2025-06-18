#include <ctype.h>
#include "main.h"
#include <unistd.h>

/**
 * _islower - Vérifie si un caractère est une lettre minuscule
 * @c: Le caractère à vérifier (code ASCII)
 *
 * Description: Cette fonction retourne 1 si le caractère passé en paramètre
 * est une lettre minuscule ('a' à 'z'), sinon elle retourne 0.
 *
 * Return: 1 si le caractère est une lettre minuscule, 0 sinon
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
