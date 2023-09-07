#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
/**
 * *string_nconcat - Write a function that concatenates two string
 * @s1 : first string
 * @s2 : second string
 * @n : n to concat
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conStr;
	int i = 0;
	int j = 0;
	int length1 = 0;
	int num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);
	length1 = _strlen(s1);
	conStr = malloc(sizeof(char) * (length1 + num + 1));
	if (conStr == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		conStr[i] = s1[i];
		i++;
	}
	while (j < num)
	{
		conStr[i] = s2[j];
		i++;
		j++;
	}
	conStr[i] = '\0';
	return (conStr);
}
