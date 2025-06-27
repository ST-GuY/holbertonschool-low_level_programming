#include "main.h"

/**
 * leet - Encode une chaîne en 1337
 * @s: La chaîne à encoder
 *
 * Return: La chaîne encodée
 */
char *leet(char *s)
{
	int i = 0, j; /* i parcourt la chaîne, j parcourt les lettres à remplacer */
	char letters[] = "aAeEoOtTlL"; /* Lettres à transformer */
	char leet[]    = "4433007711"; /* Valeurs de remplacement correspondantes */

	while (s[i] != '\0') /* Parcours de chaque caractère de la chaîne */
	{
		j = 0; /* Réinitialisation de j pour chaque nouveau caractère */
		while (letters[j] != '\0') /* Parcours des lettres à convertir */
		{
			if (s[i] == letters[j]) /* Vérifie si caractère */
									/* correspond à une lettre à transf' */
			{
				s[i] = leet[j]; /* Remplacement par le caractère 1337 correspondant */
				break; /* Sort de la boucle dès qu'une correspondance est trouvée */
			}
			j++; /* Passe à la lettre suivante dans le tableau letters */
		}
		i++; /* Passe au caractère suivant dans la chaîne */
	}

	return (s); /* Retourne la chaîne modifiée */
}
