#include <stdio.h>

/**
 * main - entry point
 * Description: program that show the fibonacci
 * numbers from between 1 to 50
 * numbers separated by commas.
 * Return: Always 0
 */
int main(void)
{
	int i;
	int x = 1;
	int y = 0;
	int a = 0;

	while ((x + y) < 50)
	{
		a = x + y;
		printf("%d", a);
		x = y;
		y = a;
		if((x + y) < 50)
		{
			printf(",");
		}
	}
	printf("\n");
	return (0);
}
