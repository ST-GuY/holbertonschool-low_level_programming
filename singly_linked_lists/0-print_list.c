#include "lists.h"

/**
 * print_list - Affiche tous les éléments
 * d'une liste chaînée de type list_t
 * @h: Pointeur vers le début de la liste
 *
 * Return: Nombre total de nœuds dans la liste
 */

size_t print_list(const list_t *h)
{
	size_t count = 0; /* Initialise le compteur de nœuds à 0 */

	while (h != NULL) /* Parcours de la liste jusqu'à la fin */
	{
		if (h->str == NULL) /* Vérifie si le champ str est NULL */
		{
			printf("[0] (nil)\n"); /* Affiche un message formaté si str est NULL */
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str); /* Affiche la longueur et la chaîne */
		}

		count++; /* Incrémente le compteur de nœuds */
		h = h->next; /* Passe au nœud suivant de la liste */
	}

	return (count); /* Retourne le nombre de nœuds affichés */
}
