#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the array
 * @return hash_table_t*
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(table);
		return (NULL);
	}
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}
	table->size = size;
	table->array = array;
	return (table);
}
