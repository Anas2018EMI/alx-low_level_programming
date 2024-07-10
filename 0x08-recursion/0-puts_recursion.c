#include "main.h"

/* betty style doc for function _puts_recursion goes there */
/**
 * _puts_recursion - Entry point
 *
 * @src: first arg
 *
 * Return: str
 */
void _puts_recursion(char *s)
{
	
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else if (*s == '\0')
        {
		_putchar('\n');
	}
}
