#include "main.h"

/* betty style doc for function _sqrt_recursion goes there */
/**
 * _sqrt_recursion - Entry point
 *
 * @n: first arg
 *
 * Return: int
 */
int _sqrt_check(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_check(n, i + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_check(n, 0));
}
