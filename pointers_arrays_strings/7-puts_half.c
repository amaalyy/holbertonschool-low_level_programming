#include "main.h"
/**
*puts_half -  prints half of a string
*@str: pointer
*Return: 0
*/
void puts_half(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i >= 5)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
