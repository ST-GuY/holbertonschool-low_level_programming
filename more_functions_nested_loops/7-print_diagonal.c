#include "main.h"

/**
 * print_diagonal - Dessine une diagonale sur la console
 * @n: Le nombre de fois que le caractère '\' doit être imprimé
 *
 * Description: Pour chaque ligne, cette fonction imprime un certain
 * nombre d'espaces suivi du caractère '\', formant ainsi une diagonale.
 * Si n est inférieur ou égal à 0, la fonction imprime simplement une nouvelle ligne.
 */

void print_diagonal(int n)
{
	int i;
	int j;

		if (n <= 0)
		{
		_putchar('\n');
		}

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
			_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}

}
