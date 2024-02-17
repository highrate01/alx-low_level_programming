#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 *
 * @ht: pointer to hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *bucket;
	int nothing = 1;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];
		while (bucket)
		{
			if (!nothing)
				printf(",");
			printf("'%s': '%s'", bucket->key, bucket->value);
			nothing = 0;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}
