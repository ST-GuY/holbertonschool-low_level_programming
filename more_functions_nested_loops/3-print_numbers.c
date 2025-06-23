#include "main.h"
#include <unistd.h>

/**
 * print_numbers - Affiche les chiffres de 0 à 9 suivis d'une nouvelle ligne.
 *
 * Return: Rien.
 */

void print_numbers(void)
{
	int n;
	for (n = '0'; n <= '9'; n++)
	_putchar(n);
	_putchar('\n');
}
