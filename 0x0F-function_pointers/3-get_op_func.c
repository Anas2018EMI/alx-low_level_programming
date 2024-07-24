#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/* betty style doc for function get_op_func goes there */
/**
 * get_op_func - Entry point
 *
 * @s: first arg
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

