#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: pointer to the hash table
 * @key: key to add to the element
 * @value: value to add element
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *_value, *_key;
	hash_node_t *bucket, *new_node;

	if (!ht || !key || !value)
		return (0);

	_value = strdup(value);
	if (!_value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = _value;
			return (1);
		}
		bucket = bucket->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(_value);
		return (0);
	}
	_key = strdup(key);
	if (!_key)
		return (0);
	new_node->key = _key;
	new_node->value = _value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
