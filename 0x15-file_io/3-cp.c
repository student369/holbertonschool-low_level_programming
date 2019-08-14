#include "holberton.h"
#define _BUFFER 1200

/**
 * end - function that show the standar errors
 * @n: error status
 * @s: file name
 * Return: 97, 98, 99 or 100
 */
int end(int n, char *s)
{
	int val;

	if (n == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp from_f to_f");
		val = 97;
	}
	else if (n == 98)
	{
		dprintf(STDERR_FILENO, "Not posible to read file %s\n", s);
		val = 98;
	}
	else if (n == 99)
	{
		dprintf(STDERR_FILENO, "Error writing in the file %s\n", s);
		val = 99;
	}
	else
	{
		dprintf(STDERR_FILENO, "Error closing the file\n");
		val = 100;
	}
	return (val);
}

/**
 * main - copies the file in another file
 * @ac: Count of params
 * @av: The params given
 * Return: 0 in success, 97, 98, 99 or 100 in error case
 */
int main(int ac, char *av[])
{
	int _fto, _from, val_r;
	char *from, *to, buff[1024];

	if (ac != 3)
		exit(end(97, NULL));
	from = av[1], to = av[2];
	_from = open(from, O_RDONLY);
	if (_from == -1)
		exit(end(98, from));
	_fto =  open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (_fto == -1)
	{
		exit(close(_from) == -1 ? end(_from, NULL) :		end(99, to));
	}
	val_r = read(_from, &buff, _BUFFER);
	while (val_r)
	{
		if (val_r == -1)
			exit(close(_from) == -1 ? end(_from, NULL) :
				      close(_fto) == -1 ? end(_fto, NULL) :
				      end(98, from));
		if (write(_fto, &buff, val_r) == -1)
			exit(end(99, to));
		val_r = read(_from, &buff, _BUFFER);
	}
	return(close(_from) == -1 ? end(_from, NULL) :
	       close(_fto) == -1 ? end(_fto, NULL) : 0);
}
