#include "dog.h"
/**
 * free_dog - Libère la mémoire allouée pour une structure dog_t
 * @d: Pointeur vers la structure dog_t à libérer
 *
 * Cette fonction libère la mémoire allouée dynamiquement pour les membres
 * 'name' et 'owner', ainsi que pour la structure elle-même.
 * Si le pointeur passé est NULL, la fonction ne fait rien.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)	/* Vérifie si le pointeur est NULL pour éviter une erreur */
	{
		return;		/* Ne fait rien si le pointeur est NULL */
	}

	free(d->name);	/* Libère la mémoire allouée pour le nom du chien */
	free(d->owner);	/* Libère mémoire allouée pour le propriétaire du chien */
	free(d);		/* Libère la mémoire allouée pour la structure dog_t */
}
