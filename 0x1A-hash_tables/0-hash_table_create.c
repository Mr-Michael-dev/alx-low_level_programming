#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t *nodes[size];

	table = malloc(sizeof(hash_table_t))
	nodes[size] = malloc(sizeof(hash_nodr_t))

	table->size = size;
	table->array = nodes;

	return(table);
}
