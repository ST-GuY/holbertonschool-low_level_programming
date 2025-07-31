#include "lists.h"
/**
 * sum_dlistint-Calcule la somme de tous les éléments d'une liste dlistint_t.
 * @head: Pointeur vers le début de la liste.
 *
 * Return: Somme de tous les éléments, ou 0 si la liste est vide.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;  /* Initialise la somme à 0 */

	while (head != NULL)  /* Parcourt chaque nœud de la liste */
	{
		sum += head->n;  /* Ajoute la valeur du champ n à la somme */
		head = head->next;  /* Passe au nœud suivant */
	}

	return (sum);  /* Retourne la somme totale */
}
