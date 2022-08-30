#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: This is the key
 * @size: Is the size of the hash_table
 * Return: Index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int key_index_hash;

if (key == NULL)
	return (0);

key_index_hash = hash_djb2(key) % size;

return (key_index_hash);
}
