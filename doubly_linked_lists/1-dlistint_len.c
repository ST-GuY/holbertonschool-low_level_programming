#include "lists.h"

/**
 * dlistint_len -Compte le nombre de nœuds dans une liste doublement chaînée
 * @h: pointeur vers le premier nœud de la liste
 *
 * Return: nombre total de nœuds dans la liste
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;          /* Initialise le compteur de nœuds à 0 */

	while (h != NULL)
	/* Parcourt la liste tant que le nœud courant n'est pas NULL */
	{
		count++;             /* Incrémente le compteur à chaque nœud */
		h = h->next;         /* Passe au nœud suivant dans la liste */
	}

	return (count);           /* Retourne le nombre total de nœuds */
}
