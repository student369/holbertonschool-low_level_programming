#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * Description: A program to prints the argumends
 * diven in console.
 *
 * Return: Always 0:
 */
int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	char *toks = NULL;

	printf("$ ");
	while ((read = getline(&line, &len, stdin)) != -1)
	{
		printf("%s", line);
		printf("$ ");
	}
	free(line);
	exit(EXIT_SUCCESS);
}
