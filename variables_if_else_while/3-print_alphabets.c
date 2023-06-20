#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char uppercase = 'A';
	char lowercase = 'a';

	for (; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	for (; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}

