#include "main.h"

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Return: La longueur de la chaîne.
 */
int _strlen(char *s)  /* Fonction qui retourne la longueur d'une chaîne */
{
	char *p;  /* Pointeur temporaire pour parcourir la chaîne */

	if (s == NULL)  /* Si la chaîne est NULL */
		return (0);  /* On retourne 0 pour éviter une erreur */

	p = s;  /* Initialisation du pointeur temporaire au début de la chaîne */

	while (*p != '\0')  /* Tant que le caractère pointé n'est pas la fin de chaîne */
	{
		p++;  /* On avance le pointeur */
	}

	return (p - s);  /* On retourne la différence d'adresse (longueur de la chaîne) */
}

/**
 * print_rev - Affiche une chaîne en ordre inverse suivie d'un saut de ligne.
 * @s: Pointeur vers la chaîne à afficher à l'envers.
 *
 * Description: Utilise _strlen pour obtenir la longueur puis affiche
 * chaque caractère en partant de la fin.
 *
 * Return: Rien (void)
 */
void print_rev(char *s)  /* Fonction pour afficher la chaîne à l’envers */
{
	int i;  /* Variable d'index */

	i = _strlen(s) - 1;  /* Initialisation à l’index du dernier caractère */

	while (i >= 0)  /* Tant que l’index est valide */
	{
		_putchar(s[i]);  /* Affiche le caractère courant */
		i--;  /* Décrémente l’index pour reculer */
	}

	_putchar('\n');  /* Affiche un saut de ligne après la chaîne */
}
