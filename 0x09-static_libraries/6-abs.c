#include "main.h"

/* betty style doc for function _abs goes there */
/**
 * _abs - Entry point
 * @n: First operand
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}

	return (n);
}
