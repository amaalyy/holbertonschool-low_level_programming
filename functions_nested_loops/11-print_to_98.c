#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - entry point
 * @n: natural numbers
 * Return: 0
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
		printf("98");
		putchar('\n');
}
