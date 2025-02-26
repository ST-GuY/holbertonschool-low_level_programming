#include "main.h"

/**
 * print_diagonal - Dessine une ligne diagonale dans le terminal.
 * @n: Nombre de fois que le caractère '\' doit être imprimé.
 *
 * Description :
 * Cette fonction affiche une diagonale avec le caractère '\'.
 * Chaque '\' est précédé d'un nombre croissant d'espaces pour former
 * une pente diagonale.
 * Si n est inférieur ou égal à 0, seul un retour à la ligne est imprimé.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
