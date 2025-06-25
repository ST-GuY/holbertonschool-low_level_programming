#include "main.h"

/**
 * _strcpy - Copie la chaîne de caractères pointée par src vers dest
 * @dest : Pointeur vers le tampon de destination
 * @src : Pointeur vers la chaîne source à copier
 *
 * Description : Cette fonction copie la chaîne de caractères de src (y compris l'octet nul de fin “\N”) dans le tampon pointé par src.
 * l'octet nul de fin “\0”) dans le tampon pointé par dest.
 * Elle suppose que dest dispose de suffisamment d'espace pour contenir la chaîne.
 *
 * Retour : Un pointeur sur dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	return dest;
}
