#include "main.h"

/**
 * _print_rev_recursion - Affiche une chaîne de caractères à l'envers
 * @s: Pointeur vers la chaîne de caractères à afficher
 *
 * Cette fonction utilise la récursion pour parcourir la chaîne
 * jusqu'à la fin, puis affiche les caractères en ordre inverse
 * lors du retour des appels récursifs.
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0') /* Vérifie si le caractère actuel n'est pas le caractère de fin '\0' */
		{
    	_print_rev_recursion(s + 1); /* Appel récursif avec le caractère suivant */
    	_putchar(*s); /* Affiche le caractère courant après les appels récursifs */
		}
}
