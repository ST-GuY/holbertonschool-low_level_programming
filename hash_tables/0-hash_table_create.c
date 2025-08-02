#include "hash_tables.h"
/**
 * hash_table_create - Crée une table de hachage
 * @size: La taille du tableau (nombre d'entrées)
 *
 * Return: Un pointeur vers la table de hachage créée,
 *         ou NULL en cas d'échec
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	/* Allouer de la mémoire pour la structure de la table */
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	/* Allouer de la mémoire pour le tableau de pointeurs vers les nœuds */
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		/* Libérer la structure si l'allocation du tableau échoue */
		free(table);
		return (NULL);
	}

	/* Initialiser chaque case du tableau à NULL */
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	/* Enregistrer la taille de la table */
	table->size = size;

	/* Retourner la table de hachage créée */
	return (table);
}
