#include "main.h"

/* betty style doc for function _isalpha goes there */
/**
 * _isalpha - Entry point
 *@c: First operand
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
