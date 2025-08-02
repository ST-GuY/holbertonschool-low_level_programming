#include "hash_tables.h"

/**
 * key_index - Donne l'index d'une clé dans la table de hachage
 * @key: La clé à convertir en index
 * @size: La taille du tableau de la table de hachage
 *
 * Return: L'index auquel la paire clé/valeur doit être stockée
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	/* Obtenir la valeur de hachage avec la fonction djb2 */
	hash = hash_djb2(key);

	/* Réduire la valeur de hachage à un index valide dans le tableau */
	return (hash % size);
}
