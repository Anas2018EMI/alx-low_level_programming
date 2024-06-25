#include "main.h"

/* betty style doc for function _islower goes there */
/**
 * _islower - Entry point
 *@c: First operand
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
