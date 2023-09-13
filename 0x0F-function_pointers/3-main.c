#include "3-calc.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * main - check the code
 * @argc: number
 * @argv: number
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	int (*fun)(int, int);
	int calc;

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		operator = argv[2];
		fun = get_op_func(operator);
		calc = fun(num1, num2);
		printf("%d\n", calc);
	}
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
