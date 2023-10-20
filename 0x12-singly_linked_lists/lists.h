#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list - singly linked list
 * @str: malloc tring
 * @len: length of string
 * @next: pointer to next node
 */
typedef struct  list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
int len(const char *str);
list_t *add_node_end(list_t **head, const char *str);
list_t *create(const char *str);
#endif
