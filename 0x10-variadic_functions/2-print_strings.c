#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 *
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
		printf("\n");
		va_end(ptr);
}

