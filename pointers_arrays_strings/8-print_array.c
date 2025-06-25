#include "main.h"

/**
 * print_array - Imprime n éléments d'un tableau d'entiers
 * @a : Pointeur sur le tableau d'entiers
 * @n : Nombre d'éléments à imprimer
 *
 * Description : Cette fonction imprime les n premiers éléments du tableau
 * séparés par une virgule et un espace. Après le dernier élément, elle imprime une nouvelle ligne.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
