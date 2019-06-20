#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry point
  * author: José Calderón
  * Description: A C program to show
  * the numbers from 0 to 9
  * Return: 0
  */
int main(void)
{

	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);		
	}
	putchar('\n');
	return (0);
}
