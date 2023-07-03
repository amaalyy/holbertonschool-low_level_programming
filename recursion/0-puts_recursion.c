#include "main.h"
/**
 * _puts - prints a string
 *@s: str
 *Return: 0
*/
void _puts_recursion(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
