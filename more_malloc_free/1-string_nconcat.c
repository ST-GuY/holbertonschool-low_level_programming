#include <stdlib.h>

/**
 * string_nconcat - Concatène deux chaînes
 * avec une limite de `n` caractères.
 * @s1: Première chaîne.
 * @s2: Deuxième chaîne.
 * @n: Nombre maximal de caractères de `s2` à ajouter.
 *
 * Return: Pointeur vers la nouvelle chaîne concaténée.
 *         NULL si l'allocation échoue.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new_str;
unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	new_str = malloc(len1 + n + 1);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (j = 0; j < n; j++)
		new_str[i + j] = s2[j];

	new_str[i + j] = '\0';

	return (new_str);
}

