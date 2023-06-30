#include "main.h"
/**
 * *cap_string - capitalizes all words
 * @str: pointer
 * Return: str
*/
char *cap_string(char *str)
{
	int i;
	int j;
	char arr[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
	'"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] - 32;
		}
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (arr[j] == str[i - 1])
				{
					str[i] = str[i] - 32;
				}
			}
		}
	}
	return (str);
}
