#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: pointer to the hash table
 * @key: key to retrieve value
 * Return: value if key exist, null otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *bucket;

	unsigned long int index = 0;
	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];
	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
	}
	return (NULL);
}
