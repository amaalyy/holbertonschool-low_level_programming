# include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char lowercase = 'a';
	int i = 0;

	for (; i <= 9; i++)
	{
		for (; lowercase <= 'z'; lowercase++)
		{
		_putchar(lowercase);
		}
		lowercase = 'a';
		_putchar('\n');
	}
}
