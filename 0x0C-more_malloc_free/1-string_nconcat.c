#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int length1 = 0;
	unsigned int length2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = strlen(s1);
	length2 = strlen(s2);
	if (n >= length2)
	{
		n = length2;
	}
	conStr = malloc(sizeof(char) * (length1 + n + 1));
	if (conStr == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		conStr[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		conStr[i] = s2[j];
		i++;
		j++;
	}
	conStr[i] = '\0';
	return (conStr);
}
