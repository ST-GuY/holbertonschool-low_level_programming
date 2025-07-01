#include "main.h"

/**
 * _puts_recursion - Affiche une chaîne de caractères
 * suivie d’un saut de ligne
 * @s: Pointeur vers la chaîne de caractères à afficher
 *
 * Description: Affiche chaque caractère de la chaîne un par un en utilisant
 * la récursion, puis affiche un saut de ligne à la fin.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Vérifie si on est à la fin de la chaîne */
	{
		_putchar('\n'); /* Affiche un saut de ligne */
		return; /* Termine la fonction */
	}
	else
	{
		_putchar(*s); /* Affiche le caractère courant */
		_puts_recursion(s + 1); /* Appelle récursivement la fonction */
									/*sur le caractère suivant */
	}
}
