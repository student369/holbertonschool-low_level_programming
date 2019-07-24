#include "function_pointers.h"

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
		{"%", op_mod}
		{NULL, NULL}
	};
	return (&ops[s][0]);
}
