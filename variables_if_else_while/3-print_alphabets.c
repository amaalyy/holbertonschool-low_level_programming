#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int lower = 97;
	int upper = 65;

	while (lower <= 122)
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 90)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}

