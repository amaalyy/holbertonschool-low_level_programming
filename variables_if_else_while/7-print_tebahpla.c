#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char lowercase = 'z';

	for (; lowercase >= 'a' ; lowercase--)
	{
	putchar(lowercase);
}
	putchar('\n');
	return (0);
}

