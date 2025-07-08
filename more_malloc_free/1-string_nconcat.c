#include "main.h"


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1, len2, total_length;
	char *array; /* Pointeur pour la chaîne concaténée */

	if (s1 == NULL) /* Si s1 est NULL, on le considère comme chaîne vide */
	{
		s1 = "";
	}
	if (s2 == NULL) /* Si s2 est NULL, on le considère comme chaîne vide */
	{
		s2 = "";
	}

	len1 = strlen(s1); /* Calcul de la longueur de s1 */
	len2 = strlen(s2); /* Calcul de la longueur de s2 */

	total_length = len1 + len2 + 1;

	array = malloc(total_length * sizeof(char));  /* Allocation dynamique */

	if (n >= len1)
	{
		len1 = n;
	}
	if (n >= len2)
	{
		len2 = n;
	}
	if (array == NULL) /* Vérification de la réussite de l'allocation */
		return (NULL);

	strncpy(array, s1, strlen(s1)); /* Copie de s1 dans array */
	strcat(array, s2);               /* Ajout de s2 à la suite de array */

	return (array);                   /* Retourne la chaîne concaténée */
}