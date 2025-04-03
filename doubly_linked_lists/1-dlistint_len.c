#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - Compte le nombre de nœuds dans une liste doublement chaînée.
 * @h: Pointeur vers la tête de la liste.
 *
 * Retourne: Le nombre de nœuds dans la liste.
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return count;
}
