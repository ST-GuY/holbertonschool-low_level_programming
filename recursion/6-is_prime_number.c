#include "main.h"

/**
 * check_prime - Fonction d'aide pour tester si un nombre est premier
 * @n: Le nombre à tester
 * @i: Le diviseur courant
 *
 * Return: 1 si n est un nombre premier, 0 sinon
 */
int check_prime(int n, int i)
{
	/* Si i * i dépasse n, aucun diviseur n'a été trouvé : n est premier */
	if (i * i > n)
		return (1);

	/* Si n est divisible par i, ce n'est pas un nombre premier */
	if (n % i == 0)
		return (0);

	/* Appel récursif avec i + 1 */
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - Vérifie si un entier est un nombre premier
 * @n: L'entier à tester
 *
 * Return: 1 si n est un nombre premier, 0 sinon
 */
int is_prime_number(int n)
{
	/* Les entiers <= 1 ne sont pas premiers */
	if (n <= 1)
		return (0);

	/* Appel la fonction récursive en commençant à 2 */
	return (check_prime(n, 2));
}

