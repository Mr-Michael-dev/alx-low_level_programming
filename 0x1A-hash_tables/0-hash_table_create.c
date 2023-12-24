#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of the table
 *
 * Return: pointer the new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **nodes;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}

	nodes = malloc(sizeof(hash_node_t *) * size);
	if (nodes == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = nodes;

	return (table);
}
