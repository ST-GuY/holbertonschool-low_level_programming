#include <stdio.h>

/**
 * _strstr - Locate a substring in a string
 * @haystack: The main string to search in
 * @needle: The substring to find
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (!*needle) /* Si needle est vide, retourner haystack */
		return (haystack);

	while (*haystack) /* Parcours de haystack */
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n)) /* Comparaison caractère par caractère */
		{
			h++;
			n++;
		}

		if (!*n) /* Si la totalité de needle a été trouvée */
			return (haystack);

		haystack++; /* Passer au caractère suivant */
	}

	return (NULL); /* Si needle n'est pas trouvée */
}
