#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/* betty style doc for function print_numbers goes there */
/**
 * print_numbers - Entry point
 *
 * @separator: first arg
 * @n: second arg
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list to;

	va_start(to, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(to, int));
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(to);
	printf("\n");
}
