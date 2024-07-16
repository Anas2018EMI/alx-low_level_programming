#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/* betty style doc for function alloc_grid goes there */
/**
 * alloc_grid - Entry point
 * @width: first arg
 * @height: second arg
 * Return: int **
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **m;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	m = (int **)malloc(sizeof(int *) * height);
	if (m == NULL)
	{
		return (NULL);
	}
	while (j < height)
	{
		m[j] = (int *)malloc(sizeof(int) * width);
		j++;
	}
	while (i < width)
	{
		j = 0;
		while (j < height)
		{
			m[j][i] = 0;
			j++;
		}
		i++;
	}
	return (m);
}
