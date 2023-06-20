#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	for (; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}

