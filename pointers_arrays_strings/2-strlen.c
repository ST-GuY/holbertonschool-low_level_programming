#include "main.h"


/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Return: La longueur de la chaîne.
 *
 * int _strlen(char *s)
 * {
 *	int count;
 *	while (*s != '\0')
 *	{
 *			count++;
 *			s++;
 *	}
 *	return (count);
 * }
*/


int _strlen(char *s)
{
	char *p; /* Déclare un pointeur temporaire */

	if (s == NULL) /* Vérifie si le pointeur est NULL */
		return (0);

	p = s; /* Initialise le pointeur temporaire avec le début de la chaîne */

	while (*p != '\0') /* Tant que le caractère pointé n'est pas le caractère de fin */
	{
		p++; /* Avance le pointeur d’un caractère */
	}
		return (p - s);  /* Calcule le nombre de caractères en soustrayant l'adresse de début de la chaîne de l'adresse de fin */
}
