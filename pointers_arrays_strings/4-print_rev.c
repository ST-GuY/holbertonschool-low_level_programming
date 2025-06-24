#include "main.h"

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Return: La longueur de la chaîne.
 *
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
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The string to be printed in reverse.
 *
 * Description: This function takes a string as input and
 * prints its characters in reverse order using a loop.
 *
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Return: La longueur de la chaîne.
 *
 */

void print_rev(char *s)
{
	int i;
i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
