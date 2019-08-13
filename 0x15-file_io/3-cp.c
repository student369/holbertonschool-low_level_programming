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
 * append_text_to_file - Function to append text to a file.
 * @filename: The file to read
 * @text_content: The text to append
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
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

/**
 * main - Program to copy a file in another.
 * Description: A function that copies the contents
 * of a text in other.
 * @ac: The count of params
 * @av: The params given to the command.
 *
 */
int main(int ac, char *av[])
{
	if (ac != 3)
		exit(97);
	return (0);
}
