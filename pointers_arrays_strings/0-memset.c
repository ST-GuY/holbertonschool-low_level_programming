#include "main.h"

/**
 * _memset - Remplit un bloc de mémoire avec une valeur constante
 * @s: pointeur vers la zone mémoire à remplir
 * @b: valeur à utiliser pour remplir (octet constant)
 * @n: nombre d'octets à remplir
 *
 * Return: pointeur vers la mémoire remplie (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i; /* Déclare une variable pour l'index de boucle */

    /* Boucle à travers les n octets */
    for (i = 0; i < n; i++)
    {
        s[i] = b; /* Affecte la valeur b à chaque octet */
    }

    return (s); /* Retourne le pointeur vers la mémoire remplie */
}
