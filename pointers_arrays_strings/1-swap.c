#include "main.h"

/**
 * swap_int - Échange les valeurs de deux entiers
 * @a: Pointeur vers le premier entier
 * @b: Pointeur vers le second entier
 *
 * Description: Cette fonction prend deux pointeurs vers des entiers
 * et échange les valeurs qu'ils pointent.
 *
 * Return: Rien (void)
 */

void swap_int(int *a, int *b)
{
	int temp = *a;  /* Stocke la valeur pointée par a dans une variable temporaire */
	*a = *b;        /* Affecte à a la valeur pointée par b */
	*b = temp;      /* Affecte à b la valeur temporaire (ancienne valeur de a) */
}
