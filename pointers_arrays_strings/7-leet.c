#include "main.h"
/**
 * *leet - encodes a string
 * @str: pointer
 * Return: str
*/
char *leet(char *str)
{
	int i;
	int j;
	char alf[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alf[j] != '\0'; j++)
		{
			if (str[i] == alf[j])
			{
				str[i] = num[j];
			}
		}
	}
	return (str);
}
