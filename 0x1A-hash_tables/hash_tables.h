#ifndef _hash_tables_h_
#define _hash_tables_h_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: unique string in hash table
 * @value: value corresponding to key
 * @next: pointer to next node of list
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - hash table structure
 *
 * @size: The size of the array
 * @array: Array of the size
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/**
 * struct shash_node_s - node of sorted hash table
 *
 * @key: the string
 * @value:  The vaue corresponding to a key
 * @next: pointer to the next of the list
 * @_prev: pointer to the previous element of the
 * sorted list
 * @_next: pointer to the next element on the sorted list
 */

typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *_next;
	struct shash_node_s *_prev;
} shash_node_t;

hash_table_t *hash_table_create(unsigned long int size);

#endif /*MAIN_H*/
