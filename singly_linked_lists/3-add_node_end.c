#include "lists.h"
/**
 * add_node_end -Ajoute un nouveau nœud à la fin d'une liste chaînée list_t
 * @head: Double pointeur vers le début de la liste
 * @str: Chaîne de caractères à copier dans le nouveau nœud
 *
 * Return: Adresse du nouveau nœud, ou NULL en cas d’échec
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;         /* Pointeur temporaire pour parcourir la liste */
	list_t *new_node;     /* Pointeur vers le nouveau nœud */

	new_node = malloc(sizeof(list_t));
	/* Allocation mémoire pour le nouveau nœud */
	if (new_node == NULL)	/* Vérifie si l’allocation a échoué */
	{
		return (NULL);
	}

	new_node->str = strdup(str);	/* Duplique la chaîne passée en argument */
	if (new_node->str == NULL)		/* Vérifie si strdup a échoué */
	{
		free(new_node);	/* Libère le nœud déjà alloué */
		return (NULL);
	}

	new_node->len = strlen(str);	/* Calcule la longueur de la chaîne */
	new_node->next = NULL;			/* Le nouveau nœud sera le dernier, donc next = NULL */

	if (*head == NULL)	/* Si la liste est vide */
	{
		*head = new_node;             /* Le nouveau nœud devient le premier */
	}
	else                               /* Sinon, on parcourt la liste jusqu'à la fin */
	{
		last = *head;                 /* On part du début de la liste */
		while (last->next != NULL)   /* Tant qu'on n'est pas au dernier nœud */
		{
			last = last->next;       /* Avance au nœud suivant */
		}
		last->next = new_node;       /* Ajoute le nouveau nœud à la fin */
	}

	return (new_node);                /* Retourne l’adresse du nouveau nœud */
}
