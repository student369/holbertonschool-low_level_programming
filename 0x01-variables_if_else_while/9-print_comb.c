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

	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
