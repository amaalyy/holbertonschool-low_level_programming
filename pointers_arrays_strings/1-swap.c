#include "main.h"
/**
 * swap_int - swap two integers
 * @a: interger
 * @b: interger
 * Return: 0
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
