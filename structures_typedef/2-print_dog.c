#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Affiche les informations d'une structure dog
 * @d: Pointeur vers la structure à afficher
 *
 * Description: Si un champ est NULL, il est remplacé par (nil).
 * Si le pointeur `d` est NULL, la fonction ne fait rien.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)		
		printf("Name: (nil)\n");
	
	else	
	{	
		printf("Name: %s\n", d->name);
	}
	printf("Age: %.1f\n", d->age);

	if (d->owner == NULL)	
	{	
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}

