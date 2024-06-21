#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 0;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + 48);
	}
	
	for (c = 97; c < 103; c++)
	{
		putchar(c);
	}

	putchar(10);
	return (0);

}
