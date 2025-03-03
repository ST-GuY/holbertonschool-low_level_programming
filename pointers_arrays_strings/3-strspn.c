#include "main.h"

/**
 * _strspn - Calcule la longueur du segment initial
 * de `s` composé de caractères de `accept`.
 * @s: Pointeur vers la chaîne à analyser.
 * @accept: Pointeur vers la chaîne contenant les caractères autorisés.
 * Return: Le nombre d'octets dans le segment initial
 * de `s` composé de caractères de `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	int i; /* Déclarer i en dehors de la boucle */

	while (*s != '\0')
	{
	found = 0;

	/* Utiliser i ici */
	for (i = 0; accept[i] != '\0'; i++)
	{
		if (*s == accept[i])
		{
		found = 1;
		break;
		}
	}

		if (found == 0)
	{
		break;
	}

		count++;
		s++;
	}

	return (count);
}
