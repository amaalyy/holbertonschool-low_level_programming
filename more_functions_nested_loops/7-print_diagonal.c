#include "main.h"
/**
 * print_diagonal - draws a diagonal line 
 * @n:  number of times the character
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
		else
		{
			int i, v; 

			for (i = 0; i < n; i++)
			{
				for (v = 0; v < n; v++)
				
					if (v == i)
					_putchar('\\');
					else if (v < i)
						_putchar(' ');	
			}
				_putchar('\n');
		}
}
