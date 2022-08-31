#include "hash_tables.h"

/**
 * hash_table_delete - Write a function that deletes a hash table.
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int position = 0;
	hash_node_t *temp_node = NULL;

	if (ht == NULL)
		return;

	for (; position < ht->size; position++)
	{
		while (ht->array[position] != NULL)
		{
			temp_node = ht->array[position]->next;
			free(ht->array[position]->key);
			free(ht->array[position]->value);
			free(ht->array[position]);
			ht->array[position] = temp_node;
		}
		free(ht->array[position]);
	}
	free(ht->array);
	free(ht);
}
