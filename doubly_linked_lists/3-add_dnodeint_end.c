#include "lists.h"

/**
 * add_dnodeint_end - Ajoute un nouveau nœud à la fin d'une liste dlistint_t.
 * @head: Double pointeur vers le premier élément de la liste.
 * @n: Valeur entière à insérer dans le nouveau nœud.
 *
 * Return: Adresse du nouveau nœud ajouté, ou NULL en cas d’échec.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node; /* Pointeur vers le nouveau nœud */
	dlistint_t *temp;     /* Pointeur temporaire pour parcourir la liste */

	/* Allocation mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL) /* Vérifie si malloc a échoué */
		return (NULL);

	new_node->n = n;       /* Assigne la valeur au nouveau nœud */
	new_node->next = NULL; /* Le nouveau nœud est le dernier, donc next = NULL */

	if (*head == NULL) /* Si la liste est vide, on insère en tête */
	{
		new_node->prev = NULL; /* Aucun élément avant lui */
		*head = new_node;      /* Le nouveau nœud devient la tête */
		return (new_node);     /* Retourne le nouveau nœud */
	}

	/* Sinon, on parcourt la liste jusqu’au dernier nœud */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node; /* L'ancien dernier nœud pointe vers le nouveau */
	new_node->prev = temp; /* Le nouveau nœud pointe vers l'ancien dernier */

	return (new_node); /* Retourne l’adresse du nouveau nœud */
}
