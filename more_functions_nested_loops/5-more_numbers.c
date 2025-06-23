#include "main.h"

/**
 * more_numbers - Affiche 10 fois les nombres de 0 à 14.
 *
 * Description : Cette fonction utilise deux boucles imbriquées pour afficher
 * les nombres de 0 à 14, dix fois de suite.
 * Si le nombre est supérieur ou égal
 * à 10, elle imprime d'abord le chiffre des dizaines,
 * suivi du chiffre des unités.
 * Chaque série de 0 à 14 est suivie d’un saut de ligne.
 *
 * Retour : Rien (void).
 */

void more_numbers(void)
{
	int a;
	int b;

		for (a = 0; a < 10; a++)
		{
			for (b = 0; b <= 14; b++)
			{
				if (b >= 10)
				_putchar('0' + (b / 10));
				_putchar('0' + (b % 10));
			}
				_putchar('\n');
		}
}
