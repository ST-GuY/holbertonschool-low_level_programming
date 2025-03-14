#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <string.h>

/**
 * struct dog - Structure représentant un chien
 * @name: Nom du chien (chaîne de caractères)
 * @age: Âge du chien (nombre à virgule flottante)
 * @owner: Nom du propriétaire du chien (chaîne de caractères)
 */
typedef struct dog {
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */

