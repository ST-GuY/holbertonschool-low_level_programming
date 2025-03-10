#include <stdlib.h>

/**
 * _strdup - Duplique une chaîne en allouant de la mémoire dynamique.
 * @str: La chaîne à copier.
 *
 * Return: Un pointeur vers la nouvelle chaîne ou NULL si échec.
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int length = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	new_str = malloc((length + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);


	for (i = 0; i <= length; i++)
		new_str[i] = str[i];

	return (new_str);
}

