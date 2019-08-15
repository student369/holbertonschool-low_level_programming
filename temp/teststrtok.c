#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @argc: Count of params
 * @argv: Params
 *
 * Return: success
 */
int main(int argc, char *argv[])
{
	char *str1, *token;
	char *saveptr1;
	int j;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s string delim\n",
			argv[0]);
		exit(EXIT_FAILURE);
	}

	for (j = 1, str1 = argv[1]; ; j++, str1 = NULL)
	{
		token = strtok_r(str1, argv[2], &saveptr1);
		if (token == NULL)
			break;
		printf("%d: %s\n", j, token);
	}
	exit(EXIT_SUCCESS);
}
