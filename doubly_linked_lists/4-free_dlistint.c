#include "lists.h"
/**
 * free_dlistint - Libère une liste doublement chaînée de type dlistint_t.
 * @head: Pointeur vers le début de la liste.
 *
 * Cette fonction parcourt la liste et libère chaque nœud.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp; /* Pointeur temporaire pour stocker le nœud suivant */

	while (head != NULL) /* Tant que la liste n'est pas vide */
	{
		tmp = head->next; /* Stocke l'adresse du prochain nœud */
		free(head);       /* Libère le nœud actuel */
		head = tmp;       /* Avance vers le nœud suivant */
	}
}
