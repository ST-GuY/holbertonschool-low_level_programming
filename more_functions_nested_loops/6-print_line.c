#include "main.h"

/**
 * print_line - Dessine une ligne droite dans le terminal.
 * @n: Nombre de fois que le caractère '_' doit être imprimé.
 *
 * Description :
 * Cette fonction affiche une ligne horizontale composée du caractère '_'.
 * Si n est inférieur ou égal à 0, seul un retour à la ligne est imprimé.
 */
void print_line(int n)
{
int i;

	if (n > 0)
{
	for (i = 0; i < n; i++)
	_putchar('_');
}
	_putchar('\n');
}

