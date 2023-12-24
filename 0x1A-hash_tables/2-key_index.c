#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key to get its index
 * @size: size of the hash table array
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2(key);

	index = hash % size;

	return (index);
}
