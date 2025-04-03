#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Ajoute un nouveau nœud au début d'une liste doublement chaînée
 * @head: Pointeur vers le pointeur du premier nœud de la liste
 * @n: Valeur du nouveau nœud
 *
 * Return: Adresse du nouveau nœud, ou NULL en cas d'échec
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    /* Allocation du nouveau nœud */
    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    /* Initialisation du nouveau nœud */
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;

    /* Si la liste n'est pas vide, mettre à jour l'ancien premier nœud */
    if (*head)
        (*head)->prev = new_node;

    /* Mettre à jour le pointeur head */
    *head = new_node;

    return (new_node);
}
