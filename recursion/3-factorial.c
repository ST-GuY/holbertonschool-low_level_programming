#include "main.h"

/**
 * factorial - Calcule la factorielle d'un entier de façon récursive
 * @n: L'entier dont on veut calculer la factorielle
 *
 * Return: La factorielle de n, ou -1 si n est négatif
 */

int factorial(int n)
{
	if (n < 0) /* Vérifie si n est négatif */
	{
		return (-1); /* Retourne -1 pour indiquer une erreur */
	}

	else if (n == 0) /* Cas de base : 0! = 1 */
	{
		return (1); /* Retourne 1 pour n == 0 */
	}
	else /* Cas récursif : n! = n * (n - 1)! */
	{
		return (n * factorial(n - 1)); /* Appel récursif */
	}
}
