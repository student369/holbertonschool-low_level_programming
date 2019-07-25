#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - Function to select the
 * operation necesary to te function
 * @s: The function given
 * Author: José Calderón
 * Return: void
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
	while (i < 6)
	{
		printf("s: %s %s\n ", s, ops[i].op);
		/*
		if (ops[i].op == s)
			return (&ops[i].f);
		*/
		i++;	       
	}
	return (NULL);
}
