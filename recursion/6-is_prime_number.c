#include "main.h"

/**
 * is_prime_number - Vérifie si un entier est un nombre premier
 * @n: L'entier à tester
 *
 * Return: 1 si n est un nombre premier, 0 sinon
 */

int is_prime_number(int n)
{
	int i;

	/* Si n est inférieur ou égal à 1, il n'est pas premier */
	if (n <= 1)
	{
		return (0);
	}

	/* On teste tous les entiers de 2 à n - 1 */
	for (i = 2; i < n; i++)
	{
		/* Si n est divisible par i, ce n'est pas un nombre premier */
		if (n % i == 0)
		{
			return (0);
		}
	}

	/* Aucun diviseur trouvé, n est un nombre premier */
	return (1);
}
