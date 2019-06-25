#include <stdio.h>

/**
 * main - entry point
 * Description: show the natural numbers multiples of 3 an 5
 * that are less that 1024 exlude it.
 * Return: Always 0
 */
int main(void)
{
	int i;
	int r = 0;
	int n = 3;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			r += i;
		}
	}
	printf("%d\n", r);
	return (0);
}
