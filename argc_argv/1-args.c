#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed to the program
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
