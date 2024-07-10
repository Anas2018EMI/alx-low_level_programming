#include "main.h"

/* betty style doc for function _strlen_recursion goes there */
/**
 * _strlen_recursion - Entry point
 *
 * @s: first arg
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	
	if (*s == '\0')
	{
		return (i);
	}
	i = 1 + _strlen_recursion(s + 1);
	return (i);
}
