#include "main.h"
/**
 * _puts - prints a string
 *@str: str
 *Return: 0
*/
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; str++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
