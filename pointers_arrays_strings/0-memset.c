#include "main.h"

/**
 * _memset - Remplit une zone de mémoire avec un octet constant.
 * @s: Pointeur vers la zone de mémoire à remplir.
 * @b: L'octet constant utilisé pour remplir la mémoire.
 * @n: Le nombre d'octets à remplir.
 *
 * Return: Un pointeur vers la zone de mémoire `s`.
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    /* Parcourir les n premiers octets de la zone mémoire */
    for (i = 0; i < n; i++)
    {
        s[i] = b; /* Remplir chaque octet avec la valeur b */
    }

    return (s); /* Retourner le pointeur s */
}
