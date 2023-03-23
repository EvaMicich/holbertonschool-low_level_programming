#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * get_op_func - checking if correct func us in the argv
 *@s: the op passed as argument
 *Return: correct answer or Error if null
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
		i = i + 1;
	}
	printf("Error\n");
	exit(99);
}
