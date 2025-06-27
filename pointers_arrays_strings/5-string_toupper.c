#include "main.h"

/**
 * string_toupper - Convertit toutes les lettres
 * minuscules d'une chaîne en majuscules
 * @str: Chaîne de caractères à modifier
 *
 * Return: Pointeur vers la chaîne modifiée
 */

char *string_toupper(char *str)
{
	int i = 0; /* Initialisation de l'index à 0 */

	while (str[i] != '\0') /* Boucle jusqu'à la fin de la chaîne */
	{
		if (str[i] >= 97 && str[i] <= 122) /* Si le caractère*/
											/*est une lettre minuscule */
		{
			str[i] = str[i] - 32; /* Convertit en majuscule en soustrayant 32 */
		}
		i++; /* Incrémentation de l'index */
	}
	return (str); /* Retourne la chaîne modifiée */
}
