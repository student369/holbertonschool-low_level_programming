#include "holberton.h"
/**
 * _pr - get the prime number
 * @i: the number
 * @n: argument adictional
 * Return: 1 or 0 (true or false)
 */
int _pr(int i, int n)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if ((i * i) > n)
	{
		return (1);
	}
	else
	{
		return (_pr(i + 1, n));
	}

}
/**
 * is_prime_number - function that verify is the number is prime
 * @n: number
 * Return: 1 (true), 2 (false)
 *
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (_pr(i, n));
	}
}
