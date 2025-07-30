#include "lists.h"
/**
 * free_list - Libère une liste de type list_t
 * @head: Pointeur vers le début de la liste
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;     /* Sauvegarde du nœud suivant */
		free(head->str);      /* Libère la chaîne de caractères */
		free(head);           /* Libère le nœud */
		head = tmp;           /* Avance au nœud suivant */
	}
}
