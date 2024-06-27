#include "main.h"

/* betty style doc for function _isdigit goes there */
/**
 * _isdigit - Entry point
 * @c: first arg
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
