#include <stdio.h>

/**
 * main - entry point
 * Description: program that sum the 
 * even numbers between 1 to 4000000
 * Return: Always 0
 */
int main(void)
{
	long i;
	long x = 1;
	long y = 0;
	long a = 0;
	long l = 4000000;
	long s = 0;

	while ((x + y) < l)
	{
		a = x + y;
		if (a % 2 == 0)
		{
			s += a;
		}
		x = y;
		y = a;
	}
	printf("%li\n", s);
	return (0);
}
