#include "holberton.h"
#include <stdio.h>

/**
 * main - a program that show the highest prime
 * Description: Print a last higher prime number
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;

	for (long i = n; i > 1; i--)
	{
		if (_isprime(i))
		{
			printf("%lu\n", i);
			break;
		}
	}

	return (0);
}

/**
 * _isprime - function to verify if a number is prime
 * Description: This function veriify if the number given
 * is prime.
 * @l: The number to verify
 * Return: 1 if is prime or 0 if not
 */
int _isprime(long l)
{
	int r = 1;

	for (int i = 2; i <= (l / 2); ++i)
	{
		if (l % i == 0)
		{
			r = 0;
			break;
		}
	}

	return (r);
}
