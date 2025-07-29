#include "lists.h"
/**
 * add_node - Ajoute un nouveau nœud au début d'une liste chaînée de type list_t
 * @head: Double pointeur vers le premier nœud de la liste
 * @str: Chaîne de caractères à dupliquer et mettre dans le nouveau nœud
 *
 * Return: Adresse du nouveau nœud, ou NULL en cas d’échec
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/* Allocation mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		/* Retourne NULL si l'allocation échoue */
		return (NULL);
	}

	/* Duplique la chaîne passée en argument */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		/* Libère le nœud si la duplication échoue */
		free(new_node);
		return (NULL);
	}

	/* Calcule et stocke la longueur de la chaîne */
	new_node->len = strlen(str);

	/* Pointe le nouveau nœud vers l'ancien premier nœud */
	new_node->next = *head;

	/* Met à jour le début de la liste pour pointer vers le nouveau nœud */
	*head = new_node;

	/* Retourne le pointeur vers le nouveau nœud */
	return (new_node);
}
