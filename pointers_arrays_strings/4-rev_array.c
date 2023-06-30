#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 * Return: 0
*/
void reverse_array(int *a, int n)
{
	int i;
	int empty;

	for (i = 0; i < n; i++)
	{
	}
	for (i = 0; i < n / 2; i++)
	{
		empty = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = empty;
	}
}
