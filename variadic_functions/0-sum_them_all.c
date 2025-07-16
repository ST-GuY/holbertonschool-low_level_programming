#include "variadic_functions.h"

/**
 * sum_them_all - Calcule la somme de tous les paramètres passés.
 * @n: Le nombre d'arguments variables passés à la fonction.
 *
 * Return: La somme des paramètres, ou 0 si n vaut 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;		/* Variable de boucle */
	int sum = 0;		/* Initialisation de la somme à 0 */
	va_list parameters;	/* Déclaration de la liste d'arguments variables */

	if (n == 0)			/* Vérifie si aucun argument n'est fourni */
	{
		return (0);		/* Retourne 0 si n vaut 0 */
	}

	va_start(parameters, n);	/* Initialise la liste d'arguments variables */

	for (i = 0; i < n; i++)		/* Boucle sur les n arguments */
	{
		sum += va_arg(parameters, int);
		/* Ajoute chaque argument de type int à la somme */
	}

	va_end(parameters);/*Termine l'utilisation de la liste d'arguments variables*/
	return (sum);		/* Retourne le total de la somme */
}
