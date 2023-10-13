#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: 0 on success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(ptr, const unsigned int);
		printf("%d", j);

		if (i != (n - 1) && separator  != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr);
}
