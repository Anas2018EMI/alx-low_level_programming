#include "function_pointers.h"
#include <stddef.h>
/* betty style doc for function print_name goes there */
/**
 * print_name - Entry point
 *
 * @name: first arg
 * @f: second arg
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

