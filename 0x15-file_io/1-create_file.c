#include "holberton.h"

/**
 * create_file - Function to create a file
 * @filename: The file to read
 * @text_content: The text to write in the file
 *
 * Return: The letters to reand and print
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_RDWR, 0600);
		return (1);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (0);
	len = _strlen(text_content);
	write(fd, text_content, len);
	close(fd);
	return (1);
}

/**
 * _strlen - funtion to get the size of an string
 * Description: A function to get the size of a
 * string given.
 * @s: The string to get size
 * Return: void
 */

unsigned int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
