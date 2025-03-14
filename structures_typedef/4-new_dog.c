#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Crée un nouveau chien et stocke une copie de ses informations
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Nom du propriétaire
 *
 * Return: Un pointeur vers le nouveau chien, ou NULL en cas d'échec.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}

