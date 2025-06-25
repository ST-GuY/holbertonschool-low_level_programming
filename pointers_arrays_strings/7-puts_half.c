#include "main.h"


/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Return: La longueur de la chaîne.
 */


int _strlen(char *s)
{
	char *p;

	if (s == NULL)
		return (0);

	p = s;

	while (*p != '\0')
	{
		p++;
	}
		return (p - s);
}

/**
 * puts_half - Affiche la seconde moitié d'une chaîne de caractères
 * @str: Pointeur vers la chaîne de caractères à afficher
 *
 * Description : Cette fonction affiche la moitié d'une chaîne.
 * Si la longueur est impaire, elle affiche les caractères à partir de
 * (longueur - 1) / 2 + 1. Si la longueur est paire, elle affiche à partir de
 * longueur / 2. Elle termine l'affichage par un saut de ligne.
 */

void puts_half(char *str)
{
	int longeur = _strlen(str);
	int moitier = longeur / 2;

		for (moitier = 5; moitier < longeur; moitier++)
		{
			_putchar(str[moitier]);
		}

		_putchar('\n');
}
