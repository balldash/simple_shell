#include "shell.h"

/**
 * frees_get_env - frees the environment variable
 * @env_path: the environment variable to free
 */

void frees_get_env(char *env_path)
{
	int i;

	for (i = 4; i >= 0; i--)
		env_path--;

	free(env_path);
}

/**
 * frees_tokens - frees the tokens
 * @tokns: the tokens to free
 */

void frees_tokens(char **tokns)
{
	char **temp = tokns;

	if (tokns)
	{
		while (*tokns)
			free(*tokns++);
		free(temp);
	}
}
