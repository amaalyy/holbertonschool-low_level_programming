#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the new file
 * @text_content: the content of the new file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f, x, l;

	f = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content == NULL && f != -1)
	{
		return (1);
	}
	l = strlen(text_content);
	x = write(f, text_content, l);
	if (x == -1)
	{
		return (-1);
	}
	return (1);
}
