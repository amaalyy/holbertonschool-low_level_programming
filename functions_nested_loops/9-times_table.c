#include "main.h"
/**
 * times_table - entry point
 * Return: 0.
 */
void times_table(void)
{
int a, i;

for (a = 0; a <= 9; a++)
{
	for (i = 0; i <= 9; i++)
	{
		int r = a * i;

		if (r <= 9)
		{
			if (i > 0)
			{
				_putchar(' ');
			}
			_putchar(r + '0');
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		else
		{
			_putchar(r / 10  + '0');
			_putchar(r % 10 + '0');
			if (i < 9)
			{
				_putchar(',');
				 _putchar(' ');
			}
		}
	}
	_putchar('\n');
}
}
