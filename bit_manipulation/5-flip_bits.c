#include "main.h"
/**
 * flip_bits -  returns the number of bits you would 
 * need to flip to get from one number to another
 * @n: f num
 * @m: s num
 * Return: j
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int c;
	unsigned long int a = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = a >> i;
		if (c & 1)
			j++;
	}
	return (j);
} 
