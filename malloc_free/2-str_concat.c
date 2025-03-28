#include <stdlib.h>

/**
 * str_concat - Concatène deux chaînes dans une nouvelle mémoire allouée.
 * @s1: Première chaîne (peut être NULL).
 * @s2: Deuxième chaîne (peut être NULL).
 *
 * Return: Pointeur vers la nouvelle chaîne concaténée ou NULL si échec.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int len1 = 0, len2 = 0, total_len, i, j;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	total_len = len1 + len2 + 1;

	new_str = malloc(total_len * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		{
		new_str[i] = s1[i];
		}

	for (j = 0; j < len2; j++)
		{
		new_str[i + j] = s2[j];
		}

		new_str[i + j] = '\0';

		return (new_str);
}

