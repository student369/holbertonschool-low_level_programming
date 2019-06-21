#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry point
  * author: José Calderón
  * Description: A C program to show
  * the numbers that print a single combination
  * Return: 0
  */
int main(void)
{

	int h;
	int i;
	int j;

	for (h = 48 ; h < 58 ; h++)
	{
		for (i = 48 ; i < 58 ; i++)
		{
			for (j = 48 ; j < 58 ; j++)
			{
				if (h < i && i < j)
				{
					putchar(h);
					putchar(i);
					putchar(j);
					if (h == 55 && i == 56 && j == 57)
					{
					}
					else
					{
						putchar(44);
						putchar(32);
					}

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
