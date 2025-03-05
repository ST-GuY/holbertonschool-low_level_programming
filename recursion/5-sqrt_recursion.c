#include "main.h"
#include <math.h>

/**
 * _sqrt_helper - Helper function to find sqrt recursively.
 * @n: The number to find the square root of.
 * @i: The current number to test as a possible square root.
 *
 * Return: The natural square root of n, or -1 if none exists.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)  /* Si i^2 dépasse n, il n'a pas de racine carrée parfaite */
		return (-1);
	if (i * i == n) /* Si i^2 == n, alors i est la racine carrée */
		return (i);

	return (_sqrt_helper(n, i + 1)); /* Teste le prochain nombre */

}
/**
 * _sqrt_recursion - Find square root.
 * @n: The number to find the square root of.
 * Return: The natural square root of n, or -1 if none exists.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 1));
}
