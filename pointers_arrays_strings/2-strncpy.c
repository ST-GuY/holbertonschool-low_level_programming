#include "main.h"

/**
 * _strncpy - Copie une chaîne de caractères avec une limite de n octets
 * @dest: Pointeur vers la chaîne de destination
 * @src: Pointeur vers la chaîne source à copier
 * @n: Nombre maximum d'octets à copier depuis src
 *
 * Description: Cette fonction copie jusqu'à n caractères de la chaîne src
 * vers la chaîne dest. Si la chaîne source est plus courte que n,
 * la fonction complète dest avec des caractères nuls ('\0').
 * Contrairement à strncpy classique, cette fonction ne garantit pas
 * que dest soit terminée par un '\0' si src a n caractères ou plus.
 *
 * Return: Un pointeur vers la chaîne de destination dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;  /* Variable pour l'index de la boucle */

	/* Copier les caractères de src vers dest tant que */
	/* l'index est inférieur à n et que src[i] n'est pas '\0' */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Remplir le reste de dest avec '\0' si src est plus courte que n */
	for (; i < n; i++)
		dest[i] = '\0';

	/* Retourner le pointeur vers la chaîne de destination */
	return (dest);
}
