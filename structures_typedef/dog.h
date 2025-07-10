#ifndef DOG_H
#define DOG_H

#include <stdio.h>
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
/* Définit un alias 'dog_t' pour la structure 'struct dog'*/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
