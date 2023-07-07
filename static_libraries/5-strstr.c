#include "main.h"
/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: string
 * Return: pointer to the beginning of the located substring, or
 *  NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
		char *second = needle;

		for (; *first != '\0' && *first == *second; first++, second++)
		{
		}
		if (*second == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
