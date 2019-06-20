#include <stdio.h>
#include <time.h>

/**
  * main - Entry point
  * Description: A C program to show if the
  * number n is positive negative or zero
  * Return: 0
  */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);
}
