#include "shell.h"

/**
 * count_input - counts the words from input
 * @str: the string
 * Return: the number of words in the string
 */

int count_input(char *str)
{
	int i = 0, cw = 0, state = 0;

	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			state = 0;
		else if (state == 0)
		{
			state = 1;
			cw++;
		}

		i++;
	}

	return (cw);
}

/**
 * count_delims - counts the delimeters in a string
 * @str: the string containing the delimeters
 * @del: the delimeters to find in the string
 * Return: the number of delimeters in the string
 */

int count_delims(char *str, char *del)
{
	int i = 0, j = 0, cw = 0;

	while (del[i])
	{
		j = 0;
		while (str[j])
		{
			if (str[j] == del[i])
				cw++;
			j++;
		}
		i++;
	}

	return (cw);
}
