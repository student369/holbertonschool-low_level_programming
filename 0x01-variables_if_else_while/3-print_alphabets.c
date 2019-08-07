#include <stdlib.h>
#include <stdio.h>

/**
  * main - Entry point
  * author: José Calderón
  * Description: A C program to show
  * the alphabet in one line
  * Return: 0
  */
int main(void)
{
	int i;

	for (i = 97 ; i < 123 ; i++)
	{
		putchar(i);
	}
	for (i = 65 ; i < 91 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
