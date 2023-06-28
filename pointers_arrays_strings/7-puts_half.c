#include "main.h"
/**
*puts_half -  prints half of a string
*@str: pointer
*Return: 0
*/
void puts_half(char *str)
{
	int length;
	int half;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
		half = length / 2;
		if (length % 2)
		{
			half = (length / 2) + 1;
		}
	for (; str[half] != '\0'; half++)
	{
		_putchar(str[half]);
	}
		_putchar('\n');
}
