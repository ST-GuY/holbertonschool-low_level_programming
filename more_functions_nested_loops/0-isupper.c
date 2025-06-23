#include "main.h"

/**
 * _isupper - Vérifie si un caractère est une lettre majuscule.
 * @c: Le caractère à vérifier (en tant qu'entier ASCII).
 *
 * Return: 1 si c est une majuscule (A-Z), 0 sinon.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
