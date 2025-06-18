#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_alphabet - Affiche les lettres minuscules de a à z,
 * suivies d’un saut de ligne.
 * dix fois
 * Return: Rien (void)
 */

void print_alphabet_x10(void)
{
int al;
int i;
for ( i = 0; i < 10; i++)
{
for (al = 'a'; al <= 'z'; al++)
{
	_putchar(al);
}
_putchar('\n');
}
}
