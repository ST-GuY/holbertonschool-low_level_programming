#include "main.h"

/**
 * cap_string - Met en majuscule la première
 * lettre de chaque mot dans une chaîne
 * @chaine: La chaîne de caractères à modifier
 *
 * Return: La chaîne modifiée avec les majuscules
 */
char *cap_string(char *chaine)
{
	int i = 0; /* Index de parcours de la chaîne */
	int new_word = 1; /*Indique si le prochain caractère est le début d'un mot*/
	char sep[] = " \t\n,;.!?\"(){}"; /* Liste des séparateurs de mots */

	while (chaine[i] != '\0') /* Parcours de la chaîne */
	{
		if (chaine[i] >= 'a' && chaine[i] <= 'z') /* Si c'est une lettre minuscule */
		{
			if (new_word) /* Si c'est le début d'un mot */
			{
				chaine[i] = chaine[i] - ('a' - 'A'); /* Conversion en majuscule */
				new_word = 0; /* On est à l'intérieur d'un mot */
			}
		}
		else
		{
			int j = 0; /* Index pour parcourir les séparateurs */

			while (sep[j] != '\0') /* Parcours des séparateurs */
			{
				if (chaine[i] == sep[j]) /* Si le caractère courant est un séparateur */
				{
					new_word = 1; /* Le prochain caractère est le début d’un mot */
					break; /* Sortie de la boucle des séparateurs */
				}
				j++; /* Passage au séparateur suivant */
			}
			if (sep[j] == '\0') /* Si aucun séparateur n'a été trouvé */
			{
				new_word = 0; /* On reste dans le mot */
			}
		}
		i++; /* Passage au caractère suivant */
	}
	return (chaine); /* Retour de la chaîne modifiée */
}
