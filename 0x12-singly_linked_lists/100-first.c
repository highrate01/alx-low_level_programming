#include "lists.h"
void first(void)__attribute__ ((constructor));

/**
 * first - func that comes first before the main func
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
