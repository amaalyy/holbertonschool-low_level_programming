#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: num of arguments
 * @argv: arrays of pointers to arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int res = 0;
	int i = 1;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (i < argc)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}
			j++;
		}
		res += atoi(argv[i]);
		i++;
	}
	printf("%d\n", res);
	return (0);
}
