#include "main.h"

/**
 * _strspn - Récupère la longueur d’un préfixe composé uniquement
 *           de caractères présents dans une autre chaîne.
 * @s: Chaîne principale à analyser.
 * @accept: Chaîne contenant les caractères acceptés.
 *
 * Return: Le nombre de caractères consécutifs, depuis le début de s,
 *         présents dans accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j; /* Index pour parcourir s et accept */
	unsigned int count = 0; /* Compteur de caractères valides */
	int found; /* Indique si le caractère de s est trouvé dans accept */

	for (i = 0; s[i] != '\0'; i++) /* Parcours de chaque caractère de s */
	{
		found = 0; /* Réinitialise l’indicateur à 0 pour chaque caractère */

		for (j = 0; accept[j] != '\0'; j++) /*Parcours chaque caractère de accept*/
		{
			if (s[i] == accept[j]) /* Si le caractère est trouvé */
			{
				found = 1; /* Marque comme trouvé */
				break; /* Quitte la boucle interne */
			}
		}

		if (found == 1) /* Si le caractère est accepté */
			count++; /* Incrémente le compteur */
		else
			break; /* Interrompt si le caractère n’est pas dans accept */
	}

	return (count); /* Retourne le nombre total de caractères acceptés */
}

