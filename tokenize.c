#include "shell.h"

/**
 * tokenize - extract tokens from string
 * @str: the string to tokenize
 * @del: the delimiter of tokenization
 * @len: tokens number
 * Return: an array of tokens of the string
 */

char **tokenize(char *str, char *del, int len)
{
	char **tokens = NULL, *token = NULL, *temp = NULL;
	int i = 0;

	tokens = malloc(sizeof(char *) * (len + 1));
	if (!tokens)
		return (NULL);

	str = remove_new_line(str);
	temp = _strdup(str);
	token = strtok(temp, del);

	while (token)
	{
		tokens[i] = _strdup(token);
		token = strtok(NULL, del);
		i++;
	}

	tokens[i] = NULL;
	free(temp);
	return (tokens);
}
