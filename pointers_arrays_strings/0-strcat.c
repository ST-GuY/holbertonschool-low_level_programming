#include "main.h"

/**
 * _strcat - Concatène deux chaînes de caractères
 * @dest: Chaîne de destination,
 * doit être assez grande pour contenir le résultat
 * @src: Chaîne source à ajouter à la fin de dest
 *
 * Return: Pointeur sur la chaîne résultante (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0; /* Index pour parcourir dest */
	int j = 0; /* Index pour parcourir src */

	/* Trouver la fin de la chaîne dest (juste avant le '\0') */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copier les caractères de src dans dest à partir de la fin */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Ajouter le caractère nul de fin à la nouvelle chaîne */
	dest[i] = '\0';

	/* Retourner le pointeur vers dest */
	return (dest);
}
