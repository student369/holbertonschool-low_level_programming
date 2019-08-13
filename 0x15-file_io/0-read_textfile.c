#include "holberton.h"

/**
 * read_textfile - Function to read and print a text
 * @filename: The file to read
 * @letters: The text to write in the file
 *
 * Return: The letters to reand and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	unsigned int len, len2;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_CREAT | O_RDONLY);
	if (fd == -1)
		return (0);
	len = letters + 1;
	buff = (char *)malloc(sizeof(char) * len);
	read(fd, buff, letters);
	len2 = _strlen(buff);
	buff[len2] = '\0';
	write(1, buff, len2);
	free(buff);
	close(fd);
	return (len2);
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
