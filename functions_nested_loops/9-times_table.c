#include "main.h"
/**
 * times_table - entry point
 * Return: 0.
 */
void times_table(void)
{
	int r, m, i;

	for (m = 0; m <= 9; m++)
{
	for (i = 0; i <= 9; i++)
	{
		r = m * i;
		if (r >= 10)
		{
			_putchar(r / 10 + '0');
			_putchar(r % 10 + '0');
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		else
		{
			_putchar(' ');
			_putchar(r + '0');
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
				_putchar ('\n');
}
}
