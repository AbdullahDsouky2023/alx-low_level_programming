#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * get_op_func - check if a number is equal to 98
 * @s: the second intger
 * Return: result
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && (strcmp(ops[i].op, s) != 0))
	{
		i++;
	}
	if (ops[i].op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	return (ops[i].f);
}
