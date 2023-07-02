#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: pointer
 * @c: character
 * Return: if the char is found return s and if the it's not found return 0
*/
char *_strchr(char *s, char c)
{

	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
