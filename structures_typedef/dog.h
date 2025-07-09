#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
/**
 * struct dog - Structure qui décrit un chien
 * @name: Pointeur vers une chaîne de caractère représentant le nom du chien
 * @age: Âge du chien (nombre à virgule flottante)
 * @owner: Pointeur vers une chaîne de caractères
 * représentant le propriétaire du chien
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
