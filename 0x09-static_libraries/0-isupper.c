#include "main.h"

/* betty style doc for function _isupper goes there */
/**
 * _isupper - Entry point
 * @c: first arg
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
