#include "holberton.h"
#include <stdio.h>
#ifndef AF
#define AF __FILE__
#endif
/**
 * main - entry point
 * Author: José Calderón
 * Return: Always 0
 */
int main(void)
{
	printf("%s\n", AF);
	return (0);
}
