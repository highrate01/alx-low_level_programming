#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @f: variable to hold string length
 * @name: the name of the person
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
