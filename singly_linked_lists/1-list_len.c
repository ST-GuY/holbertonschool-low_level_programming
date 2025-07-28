#include "lists.h"
/**
 * list_len - Compte le nombre d'éléments dans une liste chaînée list_t
 * @h: Pointeur vers le premier élément de la liste
 *
 * Return: Le nombre d'éléments dans la liste
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	/* Initialise une variable pour compter les éléments de la liste */

	while (h != NULL)
	/* Boucle tant que le pointeur n'est pas NULL (fin de la liste) */
	{
		count++;     /* Incrémente le compteur pour chaque élément */
		h = h->next; /* Passe à l’élément suivant de la liste */
	}
	return (count); /* Retourne le nombre total d’éléments comptés */
}
