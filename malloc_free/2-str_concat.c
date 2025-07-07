#include "main.h"

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, total_length;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	total_length = len1 + len2 + 1;

	array = malloc(total_length * sizeof(char));

	if (array == NULL)
    	return NULL;

	strcpy(array, s1);
    strcat(array, s2);

	return (array);
}