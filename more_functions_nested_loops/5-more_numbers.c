#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 9 except 2 4
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int m = 0;

	for (; m <= 9; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n + '0');
		}
		n = '0';
		_putchar('\n');
	}
}
