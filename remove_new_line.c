#include "shell.h"

/**
 * remove_new_line - removes a new line character from string
 * @str: the string
 * Return: the string without a new line character
 */

char *remove_new_line(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == '\n')
			str[i] = '\0';
		i++;
	}

	return (str);
}
