#include "main.h"

/**
 * _memset - Remplit une zone mémoire avec une valeur constante
 * @s: pointeur vers la zone mémoire à remplir
 * @b: valeur à copier dans la zone mémoire
 * @n: nombre d'octets à remplir
 *
 * Return: un pointeur vers la zone mémoire s
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* Utilise la fonction memset standard pour remplir s avec b sur n octets */
	memset(s, b, n);

	/* Retourne le pointeur vers la zone mémoire modifiée */
	return (s);
}
