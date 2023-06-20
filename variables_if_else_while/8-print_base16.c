#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int n;
	char lowercase = 'a';

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	for (; lowercase <= 'f'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
