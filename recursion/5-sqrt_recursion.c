#include "main.h"

/**
 * _sqrt_helper - Fonction d'aide récursive pour trouver la racine carrée
 * @n: Le nombre pour lequel on cherche la racine carrée
 * @start: Le nombre à tester comme racine possible
 *
 * Return: La racine carrée naturelle de n, ou -1 si elle n'existe pas
 */

int _sqrt_helper(int n, int start)
{
	if (start * start == n) /* Si le carré de start est égal à n */
	{
		return (start); /* On a trouvé la racine carrée */
	}
	if (start * start > n) /* Si le carré dépasse n, ce n'est pas */
								/*un carré parfait */
	{
		return (-1); /* Retourner -1 car pas de racine carrée naturelle */
	}
	return (_sqrt_helper(n, start + 1)); /*Appel récursif ac start incrémenté*/
}

/**
 * _sqrt_recursion - Retourne la racine carrée naturelle d'un nombre
 * @n: Le nombre dont on veut la racine carrée
 *
 * Return: La racine carrée naturelle, ou -1 si elle n'existe pas
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Vérifie si le nombre est négatif */
	{
		return (-1); /* Pas de racine carrée naturelle pour les nombres négatifs */
	}
	return (_sqrt_helper(n, 0)); /* Appel de la fonction récursive auxiliaire */
}
