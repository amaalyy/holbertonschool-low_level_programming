#include "main.h"
/**
 * *_strcpy - copies the string
 * @dest: pointer
 * @src: pointer
 * Return: 0
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] >= '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
