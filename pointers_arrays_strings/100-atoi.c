#include "main.h"

/**
 * _atoi - Convertit une chaîne en entier (similaire à atoi)
 * @s: La chaîne de caractères à convertir
 *
 * Return: L'entier correspondant à la chaîne, ou 0 si aucun chiffre trouvé
 */
int _atoi(char *s)
{
	int i = 0; /* Index pour parcourir la chaîne */
	int sign = 1; /* Signe du nombre (positif ou négatif) */
	int result = 0; /* Valeur entière construite à partir de la chaîne */
	int started = 0; /* Indique si une séquence de chiffres a commencé */

	while (s[i] != '\0') /* Parcours la chaîne jusqu'au caractère nul */
	{
		if (s[i] == '-') /* Si un signe moins est trouvé */
			sign *= -1; /* Inverse le signe actuel */
		else if (s[i] >= '0' && s[i] <= '9') /* Si le caractère est un chiffre */
		{
			result = result * 10 + (s[i] - '0'); /* Construction du nombre */
			started = 1; /* Indique qu'un chiffre a été trouvé */
		}
		else if (started) /* Si la séquence de chiffres a commencé et se termine */
			break; /*Arrête la conversion dès qu'un caractère non-chiffre apparaît*/
		i++; /* Passe au caractère suivant */
	}
	return (result * sign); /* Retourne le résultat final avec le bon signe */
}
