#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'z';

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar(10);
	return (0);

}
