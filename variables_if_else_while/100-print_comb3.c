# include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i, v;

	for (i = '0'; i < '9'; i++)
	{
		for (v = i + 1; v <= '9'; v++)
		{
			if (i != v)
			{
				putchar(i);
				putchar(v);

				if (i == '8' && v == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);

}
