#include "main.h"

/**
 * _puts - Affiche une chaîne de caractères suivie d’un retour à la ligne
 * @str: Pointeur vers la chaîne de caractères à afficher
 *
 * Description: Cette fonction parcourt chaque caractère de la chaîne
 * pointée par str et l’affiche un par un à l’aide de la fonction _putchar.
 * Une fois la chaîne terminée, elle affiche un saut de ligne ('\n').
 *
 * Return: Rien (void)
 */

void _puts(char *str)
{
	int i;  /* Variable d’index pour parcourir la chaîne */

	for (i = 0; str[i] != '\0'; i++) /* Parcourt chaque caractère de la chaîne jusqu'au caractère nul '\0' */
	{
		_putchar(str[i]);  /* Affiche le caractère courant */
	}
	_putchar('\n');  /* Affiche un saut de ligne après la chaîne */
}
