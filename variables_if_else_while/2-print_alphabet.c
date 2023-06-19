#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char lowercase = 'a';

	for (; lowercase <= 'z'; lowercase++)
	{
	putchar(lowercase);
}
	putchar('\n');
	return (0);
}
