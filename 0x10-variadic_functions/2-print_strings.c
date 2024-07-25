#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/* betty style doc for function print_strings goes there */
/**
 * print_strings - Entry point
 *
 * @separator: first arg
 * @n: second arg
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list to;
	char *str;

	va_start(to, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(to, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(to);
	printf("\n");
}
