#include "main.h"

/* betty style doc for function _pow_recursion goes there */
/**
 * _pow_recursion - Entry point
 *
 * @x: first arg
 * @y: second arg
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
