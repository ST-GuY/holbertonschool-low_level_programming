#include "lists.h"

/**
 * print_dlistint - Affiche tous les éléments d'une liste dlistint_t
 * @h: Pointeur constant vers le début de la liste
 *
 * Return: Le nombre total de nœuds
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);  /* Affiche la valeur du nœud */
		h = h->next;	/* Pointe h vers le nœud suivant*/
		count++;
	}

	return (count);
}
