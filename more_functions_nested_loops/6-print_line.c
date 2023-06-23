#include "main.h"
/**
 * print_line - prints the numbers from 0 to 14 10 times
 * @n: number of times
 * Return: 0
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
		else
		{
			int i;

			for (i = 0; i < n; i++)
			{
			_putchar('_');
			}
			_putchar('\n');
		}
}
