#include "hash_table.h"

/**
 * sorted_list - function for inserting new node
 *
 * @ht: pointer to sorted hash table
 * @new_node: new_node to insert
 * Return: nothing
 */
void sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *_bucket = h->_head;

	if (_bucket == NULL)
	{
		ht->_head = ht->_tail = new_node;
		new_node->_next = new_node->_prev = NULL;
		return;
	}
	do {
		if (strcmp(new_node->key, _bucket->key) < 0)
		{
			new_node->_next = _bucket;
			new_node->_prev = _bucket->_prev;

			if (!_bucket->_prev)
				ht->_head = new_node;
			else
				_bucket->_prev->_next = new_node;
			_bucket->_prev = new_node;
			return;
		}
		_bucket = _bucket->_next;
	} while (_bucket)
	new_node->_prev = ht->_tail;
	new_node->_next = ht->_tail->_next;
	ht->_tail->_next = new_node;
	ht->_tail = new_node;
}
/**
 * shash_table_create - create a sorted hash tables
 *
 * @size: size of the hash table
 * Return: pointer to hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	if (size == 0)
		return (NULL);
	table = calloc(1, sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
/**
 * shash_table_set - adds elemnt to the sorted table
 *
 * @ht: pointer to the sorted hash table
 * @key: key to add the element
 * @value: value to add to the element
 * Return: 1 on success, 0 therwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valuecopy, keycopy;
	shash_node_t *bucket, *new_node;

	if (!ht || !key || !value)
	{
		return (0);
	}
	valuecopy = strdup(value);
	if (!valuecopy)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = valuecopy;
			return (1);
		}
		bucket = bucket->next;
	}
	new_node = calloc(1, sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(valuecopy);
		return (0);
	}
	keycopy = strdup(key);
	if (!keycopy)
		return (0);
	new_node->key = keycopy;
	new_node->value = valuecopy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	sorted_list(ht, new_node);
	return (1);
}
/**
 * shash_table_get - retrieve value associated
 *
 * @ht: pointer to hash table
 * @key: key to retreive hash value
 * Return: value or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *bucket;

	if (!ht || !key || !*key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];
	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
		bucket = bucket->next;
	}
	return (NULL);
}
/**
 * shash_table_print - print key value from ht
 *
 * @ht: pointer to hash table
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *bucket;
	int nothing = 0;

	if (!ht)
		return;
	bucket = ht->_head;
	printf("{");
	while (bucket)
	{
		if (nothing)
			printf(",");
		printf("'%s': '%s'", bucket->key, bucket->value);
		nothing = 1;
		bucket = bucket->_next;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - print key value in ht from rev
 * @ht: pointer to hash table
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *bucket;
	int nothing = 0;

	if (!ht)
		return;
	bucket = ht->_tail;
	printf("{");
	while (bucket)
	{
		if (nothing)
			printf(",");
		printf("'%s': '%s'", bucket->key, bucket->value);
		nothing = 1;
		bucket = bucket->_prev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - free hash table and all nodes
 * @ht: pointer to hash table
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *bucket, *aux_free;
	unsigned long int i = 0;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];
		while (bucket)
		{
			aux_free = bucket;
			bucket = bucket->next;
			if (aux_free->key)
				free(aux_free->key);
			if (aux_free->value)
				free(aux_free->value);
			free(aux_free);
		}
	}
	free(ht->array);
	free(ht);
}
