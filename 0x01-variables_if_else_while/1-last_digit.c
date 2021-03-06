#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry point
  * author: José Calderón (based in jbarbier code)
  * Description: A C program to show if the
  * number n is higher that 5 or zero
  * n change in each execution randomly
  * Return: 0
  */
int main(void)
{
	int n, l;
	char *pre = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("%s %d is %d and is greater than 5\n", pre, n, l);
	}
	else if (l == 0)
	{
		printf("%s %d is %d and is 0\n", pre, n, l);
	}
	else
	{
		printf("%s %d is %d and is less than 6 and not 0\n", pre, n, l);
	}
	return (0);
}
