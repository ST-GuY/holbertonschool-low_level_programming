#include "dog.h"

/**
 * print_dog - affiche les informations d'une structure dog
 * @d: pointeur vers la structure dog à afficher
 *
 * Description : affiche le nom, l'âge et le propriétaire du chien.
 *              Si un champ est NULL, affiche "(nil)" à la place.
 *              Ne fait rien si le pointeur d est NULL.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)  /* Vérifie si le pointeur passé est NULL */
	{
		return;  /* Ne fait rien et quitte la fonction si d est NULL */
	}

	if (d->name != NULL)  /* Vérifie si le champ name n'est pas NULL */
	{
		printf("Name : %s\n", d->name);  /* Affiche le nom */
	}
	else
		printf("Name : (nil)\n");  /* Affiche (nil) si name est NULL */

	printf("Age : %f\n", d->age);  /* Affiche l'âge */

	if (d->owner != NULL)  /* Vérifie si le champ owner n'est pas NULL */
	{
		printf("Owner : %s\n", d->owner);  /* Affiche le nom du propriétaire */
	}
	else
		printf("Owner : (nil)\n");  /* Affiche (nil) si owner est NULL */
}
