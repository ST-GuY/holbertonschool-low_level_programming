#include "dog.h"


/**
 * init_dog - Initialise une variable de type struct dog
 * @d: Pointeur vers la structure à initialiser
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Nom du propriétaire du chien
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name; /* Affecte le pointeur 'name' au champ 'name' */
					/* de la structure pointée par 'd' */

	d->age = age; /* Affecte la valeur 'age' au champ 'age' */
					/*de la structure pointée par 'd'*/
	d->owner = owner; /* Affecte le pointeur 'owner' au champ 'owner' */
						/*de la structure pointée par 'd'*/

}
