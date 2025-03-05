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
    if (i * i > n)  /* Si i dépasse √n, alors n est premier */
        return (1);
    
    if (n % i == 0) /* Si n est divisible par i, alors il n'est pas premier */
        return (0);
    
    return (_is_prime_helper(n, i + 1)); /* Teste le diviseur suivant */
}
