#include "main.h"

/**
 * _strstr - localise la première occurrence de la sous-chaîne
 * needle dans haystack
 * @haystack: chaîne dans laquelle on cherche
 * @needle: sous-chaîne à chercher
 *
 * Return: un pointeur vers le début de la sous-chaîne trouvée,
 *         ou NULL si la sous-chaîne n'est pas trouvée
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	/* Si needle est une chaîne vide, retourner haystack */
	if (needle[0] == '\0')
	{
		return (haystack);
	}

	/* Parcourir chaque caractère de haystack */
		for  (i = 0; haystack[i] != '\0'; i++)
			{
		/* Comparer la sous-chaîne à partir de haystack[i] avec needle */
			for (j = 0; needle[j] != '\0'; j++)
			{
			/* Si un caractère ne correspond pas, sortir de la boucle */
				if (haystack[i + j] != needle[j])
					break;
			}

		/* Si on a atteint la fin de needle, c’est que needle est trouvé */
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	/* Si needle n’a pas été trouvée, retourner NULL */
	return (NULL);
}
