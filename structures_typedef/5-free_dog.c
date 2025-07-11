#include "dog.h"

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
	}
	
	free(d->name);
	free(d->owner);

}