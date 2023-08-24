#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * cap_string - Capitalize words in a string after specified characters.
 * @s: The string to be modified.
 *
 * This function capitalizes the first letter of each word in the string
 * after certain specified characters (space, tab, newline, comma, semicolon,
 * period, exclamation mark, question mark, double quote, parentheses, curl
 * y braces).
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
				s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
				s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' ||
				s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
			}
		}
		i++;
	}
	return (s);
}
