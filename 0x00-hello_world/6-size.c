#include <stdio.h>

/**
  * main - Entry point
  * Author: José Calderón
  * Description: A C file that print a text
  * Return: 0
  *
  */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float e;
	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of a int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e));
	return (0);
}
