#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14 10 times
 * Return: 0
 */
void more_numbers(void)
{
	int n;
	int m = 0;
	char ch[] = "01234567891011121314";

	for (; m < 10; m++)
	{
		for (n = 0; n <= 21; n++)
		{
			_putchar(ch[n]);
		}
		_putchar('\n');
	}
}
