#include "main.h"
/**
 * reverse_array - Inverse le contenu d'un tableau d'entiers
 * @a: Pointeur vers le tableau d'entiers
 * @n: Nombre d'éléments dans le tableau
 */
void reverse_array(int *a, int n)
{
	int i;       /* Compteur de boucle */
	int tmp;     /* Variable temporaire pour l'échange */

	/* Boucle du début jusqu'à la moitié du tableau */
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];               /* Sauvegarde de l'élément courant */
		a[i] = a[n - i - 1];      /* Remplace par l'élément symétrique de la fin*/
		a[n - i - 1] = tmp;       /* Place l'élément sauvegardé à la fin */
	}
}
