#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry point
  * author: José Calderón
  * Description: A C program to show
  * the alphabet in one line in reverse
  * order
  * Return: 0
  */
int main(void)
{

	int i;

	for (i = 122 ; i > 96 ; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
