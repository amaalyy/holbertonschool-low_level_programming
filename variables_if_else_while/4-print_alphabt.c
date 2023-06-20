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
		if (lowercase != 'e' && lowercase != 'q')
		{
			putchar(lowercase);
		}
	}
	putchar('\n');
	return (0);
}
