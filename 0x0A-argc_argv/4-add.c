#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * isNumeric - check the code
 * @str :count
 * Return: 0 or 1 .
 */
int isNumeric(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * main - check the code
 * @argc :count
 * @argv : value
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (i < arg)
	{
		if (isNumeric(argv[i]))
		{
			int num = atoi(argv[i]);

			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
