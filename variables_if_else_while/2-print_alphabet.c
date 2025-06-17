#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Affiche les lettres minuscules de l'alphabet
 *              en ordre croissant, suivies d'un saut de ligne.
 *
 * Return: 0 (Succès)
 */

int main (void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
		return (0);
}
