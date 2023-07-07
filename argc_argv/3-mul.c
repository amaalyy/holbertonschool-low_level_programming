#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: num of commandline arguments
 * @argv: pointer to an array
 * Return: 0
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i = 0;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	i = (atoi(argv[1])) * ((atoi)(argv[2]));
	printf("%d\n", i);
	return (0);
}
