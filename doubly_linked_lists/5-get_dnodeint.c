#include "lists.h"
/**
 * get_dnodeint_at_index - Retourne le nième
 * nœud d'une liste doublement chaînée.
 * @head: Pointeur vers le début de la liste dlistint_t.
 * @index: Index du nœud à récupérer (commence à 0).
 *
 * Return: Pointeur vers le nœud trouvé,
 * ou NULL si l’index est hors de portée.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	/* Initialise un compteur pour suivre la position actuelle */

	while (head != NULL)  /* Parcourt la liste jusqu'à la fin */
	{
		if (count == index)  /* Si la position actuelle correspond à l'index */
		{
			return (head);  /* Retourne un pointeur vers le nœud courant */
		}
		head = head->next;  /* Passe au nœud suivant */
		count++;  /* Incrémente le compteur */
	}
	return (NULL);  /* Si l’index est hors de portée, retourne NULL */
}
