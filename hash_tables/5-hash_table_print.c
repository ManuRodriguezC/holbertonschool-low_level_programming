#include "hash_tables.h"

/**
 * hash_table_print - Function taht print all hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int position, count = 0;

	if (ht == NULL)
		return;
	printf("{");

	for (position = 0; position <= ht->size; position++)
	{
		while (ht->array[position] != NULL)
		{
			if (count != 0)
				printf(", ");
			count++;
			printf("'%s': '%s'", ht->array[position]->key, ht->array[position]->value);
			ht->array[position] = ht->array[position]->next;
		}
	}
	printf("}\n");
}
