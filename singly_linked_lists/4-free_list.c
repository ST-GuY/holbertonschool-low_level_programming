#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Libère toute la mémoire allouée pour une liste_t.
 * @head: Pointeur vers le premier nœud de la liste.
 */
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
