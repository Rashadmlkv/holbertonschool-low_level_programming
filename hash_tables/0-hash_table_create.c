#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: size for array
 * Return: adress of created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable = malloc(sizeof(hash_table_t));

	htable->size = size, htable->array = malloc(htable->size);
	return (htable);
}
