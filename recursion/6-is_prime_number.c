#include <stdio.h>

/**
 * _is_prime_helper - Vérifie récursivement si n est divisible par i
 * @n: Le nombre à tester
 * @i: Le diviseur actuel (commence à 2)
 *
 * Return: 1 si n est premier, 0 sinon
 */
int _is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (_is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Check if prime number
 * @n: Number check
 * Return: if the input integer is a prime number, otherwise return 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime_helper(n, 2));
}
