#include "hash_tables.h"

/**
 * key_index - obtain index at which a key
 *      pair should be stored in array of a hash table.
 * @key: key to get the index of value pair.
 * @size: Array size of the hash table.
 *
 * Return: index of the key.
 * Description: Use djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
