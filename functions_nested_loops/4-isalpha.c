#include <ctype.h>
#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Vérifie si un caractère est une lettre alphabétique.
 * @c: Le caractère à vérifier (représenté sous forme d'entier ASCII).
 *
 * Cette fonction retourne 1 si le caractère passé en argument est
 * une lettre majuscule (A-Z) ou minuscule (a-z), sinon elle retourne 0.
 *
 * Return: 1 si c est une lettre alphabétique, 0 sinon.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
	}
