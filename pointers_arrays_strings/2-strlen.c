#include <stdio.h>

/**
 * _strlen - Retourne la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères.
 * 
 * Retour: La longueur de la chaîne.
 */
int _strlen(char *s)
{
	int longueur = 0;

	while (s[longueur] != '\0')
	{
	longueur++;
	}

	return longueur;
}

