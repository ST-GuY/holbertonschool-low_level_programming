#include <stdio.h>
/**
 * struct dog - Structure qui décrit un chien
 * @name: Pointeur vers une chaîne de caractères représentant le nom du chien
 * @age: Âge du chien (nombre à virgule flottante)
 * @owner: Pointeur vers une chaîne de caractères représentant le propriétaire du chien
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
