#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @str: La chaîne dont on veut calculer la longueur.
 *
 * Retour: La longueur de la chaîne.
 */
int _strlen(const char *str)
{
    int len = 0;

    while (str[len])
        len++;

    return (len);
}

/**
 * add_node_end - Ajoute un nouveau nœud à la fin d'une liste chaînée de type list_t.
 * @head: Un double pointeur vers le premier nœud de la liste list_t.
 * @str: La chaîne de caractères à dupliquer et à ajouter au nouveau nœud.
 *
 * Retour: L'adresse du nouvel élément (nœud créé),
 *         ou NULL en cas d'échec (p.ex., échec d'allocation de mémoire).
 */

 list_t *add_node_end(list_t **head, const char *str)

 {
    list_t *new_node, *temp;

    if (!str) /* Gestion des entrées invalides */
        return (NULL);

    new_node = malloc(sizeof(list_t));
    if (!new_node) /* Gestion de l'échec de l'allocation de mémoire */
        return (NULL);

    new_node->str = strdup(str);
    if (!new_node->str) /* Gestion de l'échec de strdup */
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = _strlen(new_node->str); /* Calcul de la longueur de la chaîne */
    new_node->next = NULL;

    if (*head == NULL) /* Si la liste est vide, le nouveau nœud devient le premier nœud */
    {
        *head = new_node;
    }
    else
    {
        temp = *head;
        while (temp->next) /* Parcourir jusqu'à la fin de la liste */
            temp = temp->next;

        temp->next = new_node; /* Ajouter le nouveau nœud à la fin */
    }

    return (new_node);
}
