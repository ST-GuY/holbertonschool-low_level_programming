#include "main.h"

/**
 * _strncat - Concatène deux chaînes en ajoutant au plus n octets de src
 * à la fin de dest, et ajoute un caractère nul à la fin du résultat.
 * @dest: Chaîne de destination, modifiée par la fonction.
 * @src: Chaîne source, copiée partiellement dans dest.
 * @n: Nombre maximum de caractères à copier de src.
 *
 * Return: Pointeur vers la chaîne résultante (dest).
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Trouve la fin de la chaîne dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copie au plus n caractères de src dans dest */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Ajoute le caractère nul final */
	dest[i] = '\0';

	return (dest);
}
