#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry point
  * Description: A C program to show if the
  * number n is positive negative or zero
  * n change in each execution randomly
  * Return: 0
  */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
