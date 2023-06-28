#include "main.h"
#include <stdio.h>
/**
 * print_rev -  prints a string in reverse
 * @s: poniter
 * Return: 0
*/
void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
	}
	c = c - 1;
	for (; c >= 0; c--)
	{
		_putchar(s[c]);
	}
		_putchar('\n');
}
