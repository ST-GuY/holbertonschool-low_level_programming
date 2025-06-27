#include "main.h"

/**
 * _strcmp - Compare deux chaînes de caractères.
 * @s1: Première chaîne à comparer.
 * @s2: Deuxième chaîne à comparer.
 *
 * Return: La différence entre les deux premiers caractères différents,
 * ou 0 si les chaînes sont identiques.
 */
int _strcmp(char *s1, char *s2)
{
	/* Boucle tant que les caractères sont égaux et que s1 n'est pas terminé */
	while (*s1 != '\0' && (*s1 == *s2))
	{
		/* Incrémente le pointeur de s1 */
		s1++;
		/* Incrémente le pointeur de s2 */
		s2++;
	}

	/* Retourne la différence ASCII entre les caractères de s1 et s2 */
	return (*s1 - *s2);
}
