#include "lists.h"

/**
 * add_dnodeint - Ajoute un nouveau nœud au début d'une liste dlistint_t
 * @head: double pointeur vers le début de la liste
 * @n: valeur entière à stocker dans le nouveau nœud
 *
 * Return: adresse du nouveau nœud, ou NULL en cas d’échec
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;	/* Déclare un pointeur pour le nouveau nœud */

	new_node = malloc(sizeof(dlistint_t));
	/* Alloue de la mémoire pour le nouveau nœud */
	if (new_node == NULL)	/* Vérifie si l’allocation a échoué */
		return (NULL);

	new_node->n = n;		/* Assigne la valeur à stocker dans le nouveau nœud */
	new_node->prev = NULL;	/* Le nouveau nœud n'a pas de précédent */
	new_node->next = *head;
	/* Le nouveau nœud pointe vers l’ancien premier nœud */

	if (*head != NULL)		/* Si la liste n’est pas vide */
		(*head)->prev = new_node;
		/* Met à jour le pointeur prev de l’ancien premier nœud */

	*head = new_node;	/* Met à jour le pointeur head vers le nouveau nœud */

	return (new_node);	/* Retourne l’adresse du nouveau nœud */
}
