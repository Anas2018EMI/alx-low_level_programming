#include "main.h"
#include <stddef.h>

/* betty style doc for function  print_chessboard goes there */
/**
 *  print_chessboard- Entry point
 * @a: first arg
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
