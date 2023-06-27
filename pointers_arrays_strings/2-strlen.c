#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: s
 * Return: counter
*/
int _strlen(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{}
	return (counter);
}
