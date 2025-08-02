#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);

}