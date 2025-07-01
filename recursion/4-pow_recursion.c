#include "main.h"

/**
 * _pow_recursion - Calcule x à la puissance y (x^y) avec la récursion
 * @x: Le nombre de base
 * @y: L'exposant (combien de fois on multiplie x)
 *
 * Return: Le résultat de x^y, ou -1 si y est négatif
 */

int _pow_recursion(int x, int y)
{
	if (y < 0) /* Si l'exposant est négatif */
	{
		return (-1); /*On retourne -1 car on ne gère pas les puissances négatives*/
	}
	else if (y == 0) /* Si l'exposant est 0 */
	{
		return (1); /* Tout nombre à la puissance 0 vaut toujours 1 */
	}
	else /* Sinon, on continue la récursion */
	{
		/* Multiplie x par le résultat de x^(y - 1) */
		return (x * _pow_recursion(x, y - 1));
	}
}
