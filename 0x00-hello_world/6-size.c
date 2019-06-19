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
	printf("Size of a char %d bytes(s)\n", typeof(a));
	printf("Size of a int %d bytes(s)\n", typeof(b));
	printf("Size of a long int %d bytes(s)\n", typeof(c));
	printf("Size of a long long %d bytes(s)\n", typeof(d));
	printf("Size of a float %d bytes(s)\n", typeof(e));
	return (0);
}
