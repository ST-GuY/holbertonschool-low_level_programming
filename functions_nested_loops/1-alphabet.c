#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_alphabet - Affiche les lettres minuscules de a à z,
 *  suivies d’un saut de ligne.
 *
 * Return: Rien (void)
 */

void print_alphabet(void)
{
int al;
for (al = 'a'; al <= 'z'; al++)
	_putchar(al);
	_putchar('\n');
}
