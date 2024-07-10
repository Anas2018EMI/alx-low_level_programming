#include "main.h"

/* betty style doc for function _print_rev_recursion goes there */
/**
 * _print_rev_recursion - Entry point
 *
 * @s: first arg
 *
 * Return: str
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else if (*s == '\0')
	{
		_putchar('\n');
	}
}
