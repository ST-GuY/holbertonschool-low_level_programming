#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - crée un nouveau chien.
 * @name: Le nom du chien.
 *@age: L'age du chien.
 *@owner: Le propriétaire du chien.
 * Return: Un pointeur vers le chien crée, ou NULL si l'échec.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);

	dog->owner = malloc(strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
