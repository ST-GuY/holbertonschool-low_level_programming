#include "main.h"


char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	
	malloc(size * sizeof(char));

	if (c == NULL)
	{
		return(NULL);
	}
	
}