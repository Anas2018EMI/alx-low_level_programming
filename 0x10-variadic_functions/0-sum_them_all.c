#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
/* betty style doc for function  sum_them_all goes there */
/**
 * sum_them_all - Entry point
 *
 * @n: first arg
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list to;

	if (n == 0)
	{
		return (0);
	}
	va_start(to, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(to, int);
	}
	va_end(to);
	return (sum);
}
